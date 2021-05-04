#!/usr/bin/env python3

'''
Node2: /Number_counter node
Author: Ahmed Ashraf
'''

#Importing rclpy library
import rclpy

#Importing the node class
from rclpy.node import Node 

#Importing standard integer message
from std_msgs.msg import Int64

#Importing setting bool service 
from example_interfaces.srv import SetBool

#Creating a client node class
class client_node(Node):

    #Defining the constructor of publisher node
    def __init__(self):

        #Inheriting the constructor of Node class
        super().__init__("Reset_client")

        #Creating a reset client
        self.resetClient = self.create_client(SetBool, "Number_counter_server")        

        #Printing the welcome message of the node
        self.get_logger().info("Reset_client node started already !!!")

        while (not self.resetClient.wait_for_service(timeout_sec= 1)):
            self.get_logger().info("Server not available, Trying again....")
        
        self.req = SetBool.Request()
    
    def send_request(self):
        self.req.data = True
        self.futureReq = self.resetClient.call_async(self.req)
    


#Code entry point
def main(args = None):

    #Initialzing the ros client with no arguments
    rclpy.init(args = args)

    #Creating a client object by client node
    Reset_client_obj = client_node()

    #Sending the request to server
    Reset_client_obj.send_request()

    #While the ros client is available
    while rclpy.ok():

        #Spin once
        rclpy.spin_once(Reset_client_obj)

        #If the request is sent
        if(Reset_client_obj.futureReq.done()):

            #Counter reset success message
            Reset_client_obj.get_logger().info("Counter reset successfully")

            #Break from while loop
            break



    #Shutdown the ros client
    rclpy.shutdown()

#Making sure that we are running this file main function
if __name__ == "__main__":

    #Running main function
    main()

