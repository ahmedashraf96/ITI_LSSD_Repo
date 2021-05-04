#!/usr/bin/env python3
#The upper comment sets the interpretter to run with python3

#Importing ros client python library
import rclpy

#Importing class Node from rclpy -> node.py file 
from rclpy.node import Node

#Import string data type to be sent
from example_interfaces.msg import String

#Creating class that inherits Node class
class my_node(Node):

    #Define the class constructor
    def __init__(self, node_name):
        
        #Define a counter that will be used in timer_callBack function
        self.counter = 0

        #Inherits the parent class (Node) constructor
        super().__init__(node_name)
    
        self.create_subscription(String, "New_topic", self.subscriber_callBack, 10)

        #Printing a message over terminal
        self.get_logger().info("The subscriber node has started already!!!")


    #Function defined as a subscriber call back
    def subscriber_callBack(self, msg):

        #Getting the messages from publisher over terminal
        self.get_logger().info(msg.data)
        

#Defining the main function of node communication with no arguments
def main(args = None):
    
    #Initializing the ros client with no arguments
    rclpy.init(args = args)
    
    '''
    #In case of using main only without classes

    #Creating a node named "My_first_node" (No whitespaces allowed)
    node = Node("My_first_node")

    #Printing over the terminal that node has started
    node.get_logger().info("Node has started!!!")
    '''
    #Creating an object from my_node class
    node = my_node("Subscriber_node")

    #Spinning infinitely waiting for an event
    rclpy.spin(node)

    #Shutting down the ros (Garbage collector)
    rclpy.shutdown()


#Making sure that I'm running over the main function of the file itself
#Protection when importing this file to another (__name__ will change)
if __name__ == "__main__":
    
    #Calling the main function
    main()