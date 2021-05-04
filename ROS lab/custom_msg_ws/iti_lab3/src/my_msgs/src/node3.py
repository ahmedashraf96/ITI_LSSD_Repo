#!/usr/bin/env python3

'''
Node2: /Number_counter node
Author: Ahmed Ashraf
'''

#Importing rclpy library
import rclpy

#Importing the node class
from rclpy.node import Node 

#Importing resetting number service
from my_msgs.srv import ResetNum

#Creating a client node class
class client_node(Node):

    #Defining the constructor of publisher node
    def __init__(self):

        #Inheriting the constructor of Node class
        super().__init__("Reset_client")

        #Creating a reset client
        self.resetClient = self.create_client(ResetNum, "Number_counter_server")        

        #Printing the welcome message of the node
        self.get_logger().info("Reset_client node started already !!!")

        #Checking if the server is available or not every 1 second
        while (not self.resetClient.wait_for_service(timeout_sec= 1)):
            
            #Reporting that the server isn't available
            self.get_logger().info("Server not available, Trying again....")
        
        #Getting the request
        self.req = ResetNum.Request()

        #Getting the response
        self.res = ResetNum.Response()
    
    #Processing request
    def send_request(self):

        #Setting the boolean variable to True
        self.req.booldata = True

        #Sending the request
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

            #Getting the response
            response = Reset_client_obj.futureReq.result()

            #Counter reset success message
            Reset_client_obj.get_logger().info(response.strdata)

            #Break from while loop
            break

    #Shutdown the ros client
    rclpy.shutdown()

#Making sure that we are running this file main function
if __name__ == "__main__":

    #Running main function
    main()