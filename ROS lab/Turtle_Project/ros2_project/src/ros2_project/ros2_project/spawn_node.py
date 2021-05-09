#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from turtlesim.srv import Kill
from turtlesim.srv import Spawn
from std_srvs.srv import Empty

from turtle_custom_msgs.srv import TurtleService

import random as rand

class turtle_spawn_node(Node):
    def __init__(self):
        super().__init__("spawn_node")
        self.turtle_counter = 2

        self.turtle_spawnServer = self.create_service(TurtleService, "turtle_spawn", self.turtleServer_callBack)
        self.turtle_killingClient = self.create_client(Kill, "kill")
        self.turtle_spawnClient = self.create_client(Spawn, "spawn")
        self.turtle_clearClient = self.create_client(Empty, "clear")

        while not( (self.turtle_killingClient.wait_for_service(timeout_sec=1.0)) and (self.turtle_spawnClient.wait_for_service(timeout_sec=1.0)) ):
            self.get_logger().info("Waiting for turtle services")

        self.killReq = Kill.Request()
        self.spawnReq = Spawn.Request()
        self.clearReq = Empty.Request()

        self.spawnReq.x = float(rand.randint(1, 10))
        self.spawnReq.y = float(rand.randint(1, 10))
        self.spawnReq.theta = 0.0        
        self.spawnReq.name = "turtle{}".format(self.turtle_counter)

        self.turtle_spawnClient.call_async(self.spawnReq) 

    def turtleServer_callBack(self, request, response):
        if(request.status == True):
            self.turtle_clearClient.call_async(self.clearReq)    

            self.killReq.name = "turtle{}".format(self.turtle_counter)            
            self.turtle_killingClient.call_async(self.killReq)

            self.turtle_counter += 1 

            self.spawnReq.x = float(rand.randint(1, 10))
            self.spawnReq.y = float(rand.randint(1, 10))
            self.spawnReq.theta = 0.0        
            self.spawnReq.name = "turtle{}".format(self.turtle_counter)  
            self.turtle_spawnClient.call_async(self.spawnReq)

            response.name = "turtle{}".format(self.turtle_counter)

        else:
            pass

        return response

def main(args=None):
    rclpy.init(args=args)

    node = turtle_spawn_node()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()