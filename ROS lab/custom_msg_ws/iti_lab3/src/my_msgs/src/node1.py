#!/usr/bin/env python3

'''
Node1: /Int_publisher node
Author: Ahmed Ashraf
'''

#Importing rclpy library
import rclpy

#Importing the node class
from rclpy.node import Node 

#Importing number and string message
from my_msgs.msg import StringAndNum

#Creating a publisher node class
class publisher_node(Node):

    #Defining the constructor of publisher node
    def __init__(self):

        #Inheriting the constructor of Node class
        super().__init__("Int_publisher")

        #Creating publisher
        self.intPublisher = self.create_publisher(StringAndNum, "number_topic", 10)

        #Creating timer to generate a callback every 1 second
        self.create_timer(1, self.pubTimer_callBack)
        
        #Printing the welcome message of the node
        self.get_logger().info("Int_publisher node started already !!!")
    
    #Timer call back function
    def pubTimer_callBack(self):

        #Creating message object from StringAndNum class
        msg = StringAndNum()

        #Setting the string data to message object
        msg.datamsg = "Ahmed is publishing 5"

        #Setting the counter data to message object
        msg.counter = 5

        #Publishing the message object
        self.intPublisher.publish(msg)


#Code entry point
def main(args = None):

    #Initialzing the ros client with no arguments
    rclpy.init(args = args)

    #Creating a publisher object from main publisher node
    intPublisher_obj = publisher_node()

    #Waiting infinitely until a callback happens
    rclpy.spin(intPublisher_obj)
    
    #Shutdown the ros client
    rclpy.shutdown()

#Making sure that we are running this file main function
if __name__ == "__main__":

    #Running main function
    main()
