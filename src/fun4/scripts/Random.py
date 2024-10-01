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

class Random(Node):
    def __init__(self):
        super().__init__('Random')
        self.target_pub = self.create_publisher(PoseStamped,'/target',10)
        self.timer = self.create_timer(0.01, self.timer_callback)
        self.create_subscription(Int64,'/request_target',self.request_target_callback,10)
        self.shut_swtich = self.create_publisher(Int64,'/request_target',10)
        
        self.robot = rtb.DHRobot(
        [
            rtb.RevoluteMDH(d=0.2),
            rtb.RevoluteMDH(alpha = pi/2,offset=pi/2),
            rtb.RevoluteMDH(a=0.25),
        ],tool = SE3.Tx(0.28),
        name = "RRR_Robot"
        )
    

    def timer_callback(self):
        pass
    
    def request_target_callback(self,msg:Int64):
        if msg.data == 1 : 

            self.q0 = np.random.uniform(0,pi*2, self.robot.n)

            self.fk = self.robot.fkine(self.q0)

            self.fk_sol = self.fk.t

            msg_pub = PoseStamped()
            msg_pub.pose.position.x = self.fk_sol[0]
            msg_pub.pose.position.y = self.fk_sol[1]
            msg_pub.pose.position.z = self.fk_sol[2]

            swith = Int64()
            swith.data = 2

            self.shut_swtich.publish(swith)
            self.target_pub.publish(msg_pub)

        



def main(args=None):
    rclpy.init(args=args)
    node = Random()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
