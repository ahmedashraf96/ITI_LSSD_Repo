#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

class bagFileSub_node(Node):
    def __init__(self):
        self.counter = 0
        super().__init__("bagFileSub_node")
        self.sub = self.create_subscription(Pose, "turtle1/custom_pose", self.bagSub_callBack, rclpy.qos.qos_profile_sensor_data)
        self.get_logger().info("Node started")
    
    def bagSub_callBack(self, turtlePose):
        print(turtlePose.x, turtlePose.y)


def main(args=None):
    rclpy.init(args=args)

    node = bagFileSub_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
