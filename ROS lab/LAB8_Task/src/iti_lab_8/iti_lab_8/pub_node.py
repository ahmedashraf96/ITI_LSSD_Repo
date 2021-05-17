#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class pub_node(Node):
    def __init__(self):
        super().__init__("pub_node")
        self.stringFlag = 0
        self.pub_obj = self.create_publisher(String, "custom_topic", 10)
        self.create_timer(1, self.timer_callBack)

    def timer_callBack(self):

        msg = String()
        if(self.stringFlag == 0):
            msg.data = "Hi"
            self.stringFlag = 1
        elif(self.stringFlag == 1):
            msg.data = "Hello"
            self.stringFlag = 0
        else:
            pass

        self.pub_obj.publish(msg)
        
        

def main(args=None):
    rclpy.init(args=args)
    node = pub_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
