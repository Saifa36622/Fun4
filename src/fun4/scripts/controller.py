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
from geometry_msgs.msg import Twist

class controller(Node):
    def __init__(self):
        super().__init__('controller')

        self.timer = self.create_timer(0.01, self.timer_callback)

        self.mode_server = self.create_service(Basic,"/Mode",self.Mode_callback)

        # self.timer2 = self.create_timer(0.1, self.timer2_callback)

        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.end_f_pub = self.create_publisher(PoseStamped, "/end_effector", 10)
        self.create_subscription(PoseStamped,'/target',self.target_callback,10)
        self.request_target = self.create_publisher(Int64,'/request_target',10)
        self.create_subscription(Int64,'/request_target',self.request_target_callback,10)

        self.create_subscription(Twist,'/cmd_vel',self.tele_op_callback,10)
        # self.create_subscription(Twist,'/cmd_vel_end',self.tele_op_end_callback,10)

        self.before_mode = 0
        self.q_d_base = [0,0,0]
        self.q_d_end = [0,0,0]
        self.cmd = [0,0,0,0,0,0]
        self.cmd_end = [0,0,0,0,0,0]
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
        self.timer_end_f = 0

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
        
        if self.mode == 2 :
            if self.x == 1 :
                self._logger.info("Start teleop mode base on Base frame")
                response.success.data = True
            elif self.x == 2 :
                self._logger.info("Start teleop mode base on End-effector frame")
                response.success.data = True
            else :
                self._logger.error("Please Enter the mode that you want to Tele-op in variable x (mode 1 = teleop base on Base frame ,mode 2 = teleop base on end effector frame)")
                self._logger.error("Please re-enter the mode")
                response.success.data = False

            
            return response
        

        self._logger.info(f"successfull change to mode {self.mode}")
        response.success.data = True
        return response
    


    def move_joint(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()

        

        if self.mode == 2 :
            self.q[0] = self.q[0] + (self.q_d[0] * self.dt)
            self.q[1] = self.q[1] + (self.q_d[1] * self.dt)
            self.q[2] = self.q[2] + (self.q_d[2] * self.dt)
        elif (self.target_joint_angles[0] == 0 and self.target_joint_angles[1] == 0 and self.target_joint_angles[2] == 0 and self.q[0] == 0 and self.q[1] == 0 and self.q[2] == 0 and self.mode != 0):
            return
        else :
            self.q_d[0] = self.gain * (self.target_joint_angles[0] - self.q[0])
            self.q_d[1] = self.gain * (self.target_joint_angles[1] - self.q[1])
            self.q_d[2] = self.gain * (self.target_joint_angles[2] - self.q[2])
            self.q[0] = self.q[0] + (self.q_d[0] * self.dt)
            self.q[1] = self.q[1] + (self.q_d[1] * self.dt)
            self.q[2] = self.q[2] + (self.q_d[2] * self.dt)
        

        for i in range(len(self.q)):
            msg.position.append(self.q[i])
            msg.name.append(self.name[i])
        self.joint_pub.publish(msg)
    

    def end_f(self):

        self.end_effect_pose_Raw = self.robot.fkine(self.q)

        self.end_effect_pose = self.end_effect_pose_Raw.t
        
        
        msg = PoseStamped()

        msg.header.stamp = self.get_clock().now().to_msg() 
        
        msg.header.frame_id = "link_0" 

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

    def tele_op_callback(self,msg:Twist):

        self.cmd[0] = msg.linear.x
        self.cmd[1] = msg.linear.y
        self.cmd[2] = msg.linear.z
        self.cmd[3] = msg.angular.z
        self.cmd[4] = msg.angular.z
        self.cmd[5] = msg.angular.z

        if self.x == 1 : 
            Jacobian = self.robot.jacob0(self.q)
        elif self.x == 2 :
            Jacobian = self.robot.jacobe(self.q)


        Jacobian_inv = np.linalg.pinv(Jacobian)

        q_dot_jaco = np.dot(Jacobian_inv, self.cmd)

        self.q_d = q_dot_jaco.flatten().tolist() 


    # def tele_op_end_callback(self,msg:Twist):
    #     self.cmd_end[0] = msg.linear.x
    #     self.cmd_end[1] = msg.linear.y
    #     self.cmd_end[2] = msg.linear.z
    #     self.cmd_end[3] = msg.linear.z
    #     self.cmd_end[4] = msg.linear.z
    #     self.cmd_end[5] = msg.linear.z

    #     Jacobian = self.robot.jacobe(self.q)

    #     Jacobian_inv = np.linalg.pinv(Jacobian)

    #     q_dot_jaco = np.dot(Jacobian_inv, self.cmd)

    #     self.q_d_end = q_dot_jaco.flatten().tolist() 



    # def teleop_run(self):
    #     if self.x == 1 :
    #         self.q_d = self.q_d_base
    #     elif self.x == 2 :
    #         self.q_d = self.q_d_end

            




    def timer_callback(self):
        self.timer_end_f += 1
        if self.mode == 1 :
            pass
        elif self.mode == 2 :
            # self.teleop_run()
            pass

        elif self.mode == 3 :
            self.Autorun()
        self.move_joint()
        self.end_f()

        # if self.timer_end_f % 1000 == 0: # HAl_timestamp
        # self.end_f()

        # if self.timer_end_f >= 100000:
        #     self.timer_end_f = 0
        
        

def main(args=None):
    rclpy.init(args=args)
    node = controller()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
