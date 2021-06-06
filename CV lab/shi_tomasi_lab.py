#!/usr/bin/env python3

#Importing ROS libraries
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge as cv_bridge

#Importing computer vision and numpy libraries
import cv2 as cv
import numpy as np

#Importing time library
import time

#Subscribtion node class
class sub_node(Node):
    
    #Defining class constructor
    def __init__(self):

        #Inheriting Node constructor
        super().__init__("shi_sub_node")

        #Create subscriber for "/intel_realsense_d435_depth/image_raw" topic with "Image" msg type
        self.create_subscription(Image,"/intel_realsense_d435_depth/image_raw",self.sub_callBack, rclpy.qos.qos_profile_sensor_data)

    #Subscribtion callback function    
    def sub_callBack(self, msg):
        
        #Creating a black image with the same size of camera image
        black_image = np.zeros((240,320,1), np.uint8)

        #Getting the camera image
        colored_image = cv_bridge.imgmsg_to_cv2(msg, "bgr8")

        #Convert camera image from colored scale to gray one
        gray_image = cv.cvtColor(colored_image,cv.COLOR_BGR2GRAY)

        #Detecting corners with shi-tomasi technique as a list
        detected_corners = cv.goodFeaturesToTrack(gray_image,25,0.01,10)

        #Converting detected corners list values to integer
        detected_corners = np.int64(detected_corners)

        #Making sure that there are detected corners
        if detected_corners is not None :

            #Getting evey detected corner
            for corner in detected_corners:
                
                #Getting corner x and y positions
                corner_x, corner_y = corner.ravel()

                #Drawing circle over the corner
                cv.circle(black_image,(corner_x, corner_y),3,255,-1)

            #Showing colored image with black one and corners that have been detected over it
            cv.imshow("Origin", colored_image)
            cv.imshow("corners", black_image)
        
        #Waiting for a 'q' key to be pressed
        if (cv.waitKey(1) & 0xff) == ord('q'):

            #Destroy all windows
            cv.destroyAllWindows()  

#Defining the main function
def main (args=None):

    #Initializing the ros client
    rclpy.init(args=args)

    #Getting an object from subscriber node
    node = sub_node()

    #Spinning over the node
    rclpy.spin(node)

    #Shutdown ROS client
    rclpy.shutdown()

#If this file is executed not imported then call main function
if __name__ == "__main__":

    #Calling the main function
    main()