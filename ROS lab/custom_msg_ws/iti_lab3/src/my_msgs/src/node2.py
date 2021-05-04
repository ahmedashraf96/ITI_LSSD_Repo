#!/usr/bin/env python3

'''
Node2: /Number_counter node
Author: Ahmed Ashraf
'''

#Importing rclpy library
import rclpy

#Importing the node class
from rclpy.node import Node 

#Importing number and string message
from my_msgs.msg import StringAndNum

#Importing resetting number service
from my_msgs.srv import ResetNum

#Creating a subscriber server node class
class subscriber_server_node(Node):

    #Defining the constructor of publisher node
    def __init__(self):

        #Inheriting the constructor of Node class
        super().__init__("Number_counter")

        #Creating subscriber
        self.intSubscriber = self.create_subscription(StringAndNum, "number_topic", self.subCallback, 10)

        #Creating publisher
        self.intPublisher = self.create_publisher(StringAndNum, "number_counter_topic", 10)

        #Creating server
        self.service = self.create_service(ResetNum, "Number_counter_server", self.srvCallBack)

        #Creating timer to generate a callback every 1 second
        self.create_timer(1, self.pubTimer_callBack)
        
        #counter used to be published as an integer message
        self.counter = 0
        
        #Flag used in resetting operation
        self.resetFlag = 0

        #Printing the welcome message of the node
        self.get_logger().info("Number_counter node started already !!!")
    
    #Subscribtion event call back function
    def subCallback(self, msg):

        #Accumalating the message counter data
        self.counter += msg.counter    

        #If reset flag is raised
        if self.resetFlag == 1:

            #Reset the counter
            self.counter = 0

            #Reset the reset flag
            self.resetFlag = 0
        
        #Printing the subscribed counter value
        self.get_logger().info(msg.datamsg+" ,Counter value is {}".format(self.counter))

    #Timer call back function
    def pubTimer_callBack(self):

        #Creating message object from StringAndNum class
        msg = StringAndNum()

        #Setting the counter data to message object
        msg.counter = self.counter

        #Publishing the message object
        self.intPublisher.publish(msg)

    #Service call back function
    def srvCallBack(self, request, response):
        
        #Checking if the incoming request bool is true or not
        if (request.booldata == True):

            #Printing the resetting counter request messsage
            self.get_logger().info("Incoming request of resetting the counter")
            
            #Raise the reset flag
            self.resetFlag = 1

            #Resetting the request value
            request.booldata = False

            #Responding with done message
            response.strdata = "Resetting done!"

        #Return the response
        return response

def main(args = None):

    #Initialzing the ros client with no arguments
    rclpy.init(args = args)

    #Creating a publisher object from main publisher node
    Number_counter_obj = subscriber_server_node()

    #Waiting infinitely until a callback happens
    rclpy.spin(Number_counter_obj)
    
    #Shutdown the ros client
    rclpy.shutdown()

#Making sure that we are running this file main function
if __name__ == "__main__":

    #Running main function
    main()
