#!/usr/bin/python3

from fun4.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
import numpy as np
from std_msgs.msg import Int64
import roboticstoolbox as rtb
from spatialmath import SE3
from math import pi
from custom_interface.srv import Basic
from sensor_msgs.msg import JointState
import time
class controller(Node):
    def __init__(self):
        super().__init__('controller')

        self.timer = self.create_timer(0.01, self.timer_callback)

        self.mode_server = self.create_service(Basic,"/Mode",self.Mode_callback)


        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.end_f_pub = self.create_publisher(PoseStamped, "/end_effector", 10)
        self.create_subscription(PoseStamped,'/target',self.target_callback,10)
        self.request_target = self.create_publisher(Int64,'/request_target',10)
        self.create_subscription(Int64,'/request_target',self.request_target_callback,10)

        self.stop_move = 0
        self.auto_mode = 0
        self.mode = 0
        self.dt = 0.01
        self.q = [0.0, 0.0, 0.0]
        self.cmd_vel = [0.0, 0.0, 0.0]
        self.q_d = [0.0, 0.0, 0.0] # q that need to change 
        self.gain = 1.2
        self.name = ["joint_1", "joint_2", "joint_3"]
        self.target_joint_angles = [0,0,0]

        self.robot = rtb.DHRobot(
        [
            rtb.RevoluteMDH(d=0.2),
            rtb.RevoluteMDH(alpha = pi/2,offset=pi/2),
            rtb.RevoluteMDH(a=0.25),
        ],tool = SE3.Tx(0.28),
        name = "RRR_Robot"
        )   
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        for i in range(len(self.q)):
            msg.position.append(self.q[i])
            msg.name.append(self.name[i])
        self.joint_pub.publish(msg)
    

    def Mode_callback(self,request:Basic.Request,response:Basic.Response):
        self.mode = request.mode.data
        self.x = request.x.data
        self.y = request.y.data
        self.z = request.z.data
        if self.mode == 1:

            self.check_Inverse()
            
            response.success.data = self.check_mode_1

            if response.success.data :
                self._logger.info(f"The solution is {self.target_joint_angles}")
                
            return response
        

        self._logger.info(f"successfull change to mode {self.mode}")
        response.success.data = True
        return response
    
    # def wrap_angle(self, angle):
    #     if angle > 3.14 or angle < 0:
    #         angle = angle % 3.14
    #     return angle

    def move_joint(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()

        if (self.target_joint_angles[0] == 0 and self.target_joint_angles[1] == 0 and self.target_joint_angles[2] == 0 and self.q[0] == 0 and self.q[1] == 0 and self.q[2] == 0):
            return

        self.q_d[0] = self.gain * (self.target_joint_angles[0] - self.q[0])
        self.q_d[1] = self.gain * (self.target_joint_angles[1] - self.q[1])
        self.q_d[2] = self.gain * (self.target_joint_angles[2] - self.q[2])


        self.q[0] = self.q[0] + (self.q_d[0] * self.dt)
        self.q[1] = self.q[1] + (self.q_d[1] * self.dt)
        self.q[2] = self.q[2] + (self.q_d[2] * self.dt)
        
        # self.q = [self.wrap_angle(angle) for angle in self.q]

        for i in range(len(self.q)):
            msg.position.append(self.q[i])
            msg.name.append(self.name[i])
        self.joint_pub.publish(msg)
    

    def end_f(self):
        self.end_effect_pose_Raw = self.robot.fkine(self.q)
        self.end_effect_pose = self.end_effect_pose_Raw.t
        msg = PoseStamped()
        msg.pose.position.x = self.end_effect_pose[0]
        msg.pose.position.y = self.end_effect_pose[1]
        msg.pose.position.z = self.end_effect_pose[2]

        self.end_f_pub.publish(msg)


    def check_Inverse(self):

        target_pose = SE3(self.x,self.y,self.z)

        mask = [1, 1, 1, 0, 0, 0] # consider only x y z

        solute = self.robot.ikine_LM(target_pose,mask=mask)

        if solute.success :
            self.target_joint_angles = solute.q  # ans -> [q1,q2,q3]
            self.check_mode_1 = True
        
        else :
            self.check_mode_1 = False
    
    def request_target_callback(self,msg:Int64):
        self.auto_mode = msg.data

    def target_callback(self,msg:PoseStamped):
        self.target_from_auto = msg.pose.position


    def Autorun(self):
        if self.auto_mode == 0 :
            msg = Int64()
            msg.data = 1
            self.request_target.publish(msg)
        elif self.auto_mode == 2 :
            self.target_joint_angles[0] = self.target_from_auto.x
            self.target_joint_angles[1] = self.target_from_auto.y
            self.target_joint_angles[2] = self.target_from_auto.z
            msg = Int64()
            msg.data = 3
            self.request_target.publish(msg)

            # self.start_time = self.get_clock().now().nanoseconds / 1e9
            
        elif self.auto_mode == 3:

            # current_time = self.get_clock().now().nanoseconds / 1e9

            # Hal_get_tick = current_time - self.start_time

            errors = np.abs(np.array(self.q) - np.array(self.target_joint_angles))

            if errors.sum() < 0.0005:
                # self.target_joint_angles = self.q
                msg = Int64()
                msg.data = 0
                self.request_target.publish(msg)
                # time.sleep(2)


            




    def timer_callback(self):
        
        if self.mode == 1 :
            # self.Inverse_pose_mode()
            pass
        elif self.mode == 2 :
            pass
        elif self.mode == 3 :
            self.Autorun()
        self.move_joint()
        self.end_f()
        

def main(args=None):
    rclpy.init(args=args)
    node = controller()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
