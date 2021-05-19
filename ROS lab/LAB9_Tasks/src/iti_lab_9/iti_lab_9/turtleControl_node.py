#!/usr/bin/env python3

#Importing the ROS client libraries
import rclpy
from rclpy.node import Node

#Importing turtlesim conrol publisher (Twist) and Subscriber (Pose) messages
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

#Importing resetting service
from std_srvs.srv import Empty

#Creating turtle data publisher node
class turtleDataPub_node(Node):
    
    #Node constructor
    def __init__(self):

        #Inheriting "Node" constructor
        super().__init__("turtleDataPubNode")

        #Counter used to get csv data
        self.dataCounter = 1

        #Creating turtle speed publisher
        self.turtleSpeedPub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)

        #Creating turtle speed subscriber
        self.turtleSpeedSub = self.create_subscription(Pose, "/turtle1/pose", self.sub_callBack, 10)

        #Creating reset client
        self.turtleResetCli = self.create_client(Empty, "/reset")

        #Creating timer with 1Hz rate
        self.create_timer(1, self.timer_callBack)
        
        #Opening turtle commands csv file
        turtleData_file = open("turtle_commands.csv", "r")
        
        #Reading file data
        fileData = turtleData_file.read()
        
        #Getting file data without new lines
        self.fileData_commas = fileData.split("\n")

        #Creating Reset request
        self.resetReq = Empty.Request()

    #Timer call back function
    def timer_callBack(self):

        #Making turtle speed object ti be published
        turtle_speed = Twist()

        #Getting the csv data without the '' ending line starting from the second row
        if(self.fileData_commas[self.dataCounter] != ''):

            #Getting speed data in a list form: ['linear_x', 'angular_z']
            speed_data_list = self.fileData_commas[self.dataCounter].split(",")

            #Setting the linear and angular speed data
            turtle_speed.linear.x = float(speed_data_list[0])
            turtle_speed.angular.z = float(speed_data_list[1])

            #Publishing the turtle speed data
            self.turtleSpeedPub.publish(turtle_speed)
            
            #Increasing the data counter by 1
            self.dataCounter += 1
        
        else:
            
            #Do nothing
            pass
    
    #Subscriber call back
    def sub_callBack(self, msg):
        
        #Checking if the turtle is within the bounds or not
        if( (msg.x > 2.0 and msg.x < 8.0) and (msg.y > 2.0 and msg.y < 8.0)):
            
            #Do nothing
            pass

        else:

            #Call the reset service
            self.turtleResetCli.call_async(self.resetReq)


#Main function
def main(args=None):

    #Initializing the ROS client
    rclpy.init(args=args)

    #Making a node object
    node = turtleDataPub_node()
    
    #Spinning over the node
    rclpy.spin(node)

    #Destroy the node
    node.destroy_node()

    #Shutting down the ROS client
    rclpy.shutdown

#Checking if the executable file is called or not
if __name__ == "__main__":
    
    #Calling main function
    main()