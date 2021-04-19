'''
File name: Ahmed_Ashraf_Python_Lab.py
Version: V1.0
Description: This file is used to solve the python lab tasks, You  can call the task code by entering its number
'''

#First task
def task1_func():
    
    #Entering the birth year
    year = int(input("Please enter your birth year: "))

    #Printing the user age
    print("You are {} years old".format(2021-year))

###############################################################################################################################################

#Second task
def task2_func():

    #Entering the maximum natural number
    natural_num = int(input("Please enter any number: "))

    #Local variable used to get the sum of antural numbers
    natural_sum = 0

    #Local variable used to get the average of natural numbers
    natural_avg = 0

    #Looping over natural numbers
    for i in range(natural_num):
        
        #Getting the sum of natural numbers
        natural_sum += i+1

    #Getting the avg of natural numbers
    natural_avg = float(natural_sum) / natural_num

    #Printing the sum of natural numbers from 1 to entered number
    print("The sum of natural numbers from 1 to {} = {}".format(natural_num, natural_sum))

    #Printing the sum of natural numbers from 1 to entered number
    print("The sum of natural numbers from 1 to {} = {}".format(natural_num, natural_avg))

###############################################################################################################################################

#Third task
def task3_func():
    
    #Enter the pyramid height
    pyramid_height = int(input("Please enter pyramid height: "))

    #Local variable used in getting spaces number
    spaces = 0

    #Local variable used in getting asterisks number
    asterisks = 0

    #Drawing the pyramid loop
    for height in range(pyramid_height):
        
        #Getting the spaces number
        spaces = (pyramid_height - 1) - height

        #Spaces loop
        for i in range(spaces):

            #Printing a space
            print(" ",end=" ")

        #Getting the asterisks number
        asterisks = (height * 2) + 1

        #Asterisks loop
        for i in range(asterisks):

            #Printing an asterisk
            print("*", end=" ")

        #Spaces loop
        for i in range(spaces):

            #Printing a space
            print(" ", end=" ")

        #Printing a new line
        print("\n")

###############################################################################################################################################

#Fourth task
def task4_func():
    
    #Enter q to exit the program
    print("Enter \'q\' for exit")

    #Enter a number
    number = input("Enter any number: ")

    #Check if the entered is a number not an alphapetical character
    if number >= '0' and number <= '9':
        
        #Cast the entered number to integer
        number = int(number)

        #Checking if the number is even or not    
        if number % 2 == 0:
            
            #The entered number is even
            print("{} is an even number".format(number))
        
        else:

            #The entered number is odd
            print("{} is an odd number".format(number))
    else:

        #Exit from the program
        exit()

###############################################################################################################################################

#Fifth task
def task5_func():
    
    #Enter q to exit the program
    print("Enter \'q\' for exit")

    #Enter a string
    entered_string = input("Enter any string to remove all vowels from it: ")

    #Vowels list
    vowels_list = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

    #Check if the entered string isn't 'q'
    if entered_string != 'q':

        #Looping over vowel list
        for vowel_char in vowels_list:
            
            #Removing the vowels
            entered_string = entered_string.replace(vowel_char, '')

        #Printing the new string
        print("New string after successfully removing all vowels: {}".format(entered_string))
        
    else:

        #Exit from the program
        exit()

###############################################################################################################################################

#Sixth task
def task6_func():

    #List that will be written to a file
    file_list = ['1', '2', '3']

    #Creating a text file and opening it
    file_var = open("listFile.txt", "w")

    #Writing the list to the file
    file_var.write("The file list is: {}".format(str(file_list)))

    #Closing the file
    file_var.close()

###############################################################################################################################################

#Seventh task
def task7_func():

    #Defining a list
    my_list = [2, 6, 7, 9, 0]

    #Local variable used to get the result of list sum
    sum_result = 0

    #A function used to sum list numbers
    def sum_func(local_list):

        #Summing list numbers
        sum_result = sum(local_list)

        #Printing the result of the sum
        print("The list sum is: {}".format(sum_result))
    
    #Calling sum function
    sum_func(my_list)

###############################################################################################################################################

#Eighth task
def task8_func():

    #Defining a list
    my_list = [3, 9, 5, 4, 5, 18, 7, 18, 19]

    #Creating a list will be used to carry the even numbers
    even_list = []

    #A function used to get the even numbers in a list
    def is_even_num_func(local_list):

        #Looping over list components
        for num in local_list:

            #Checking if the number is even or not
            if num % 2 == 0:

                #Appending the number in the even numbers list
                even_list.append(num)
            
            else:
                #Do nothing
                pass
    
        #Printing the even numbers list
        print("The even numbers list is: {}".format(even_list))

    #Calling sum function
    is_even_num_func(my_list)    

###############################################################################################################################################

#Ninth task
def task9_func():
    
    #Creating a class
    class string_class:
                
        #Class init function
        def __init__(self):

            #Local variable carries the entered string
            self.entered_string = ""

        #A function used to get a string from user
        def get_string(self):

            #Get the entered string
            self.entered_string = input("Please, enter a string: ")

        #A function used to print a string entered from user
        def print_string(self):

            #Print the entered string in upper case
            print(self.entered_string.upper())

    #Making an object from string class
    user_string = string_class()

    #Getting a string from user
    user_string.get_string()

    #Printing the string that user entered
    user_string.print_string()

###############################################################################################################################################

#Tenth task
def task10_func():

    #Creating a class
    class vehicle:

        #Class init function
        def __init__(self, distance, duration):

            #Local variable used to get the average speed
            self.avg_speed = 0

            #Local variable used to get the distance
            self.distance = distance

            #Local variable used to get the duration
            self.duration = duration

        #A function used to calculate the average speed        
        def calculate_avg_speed(self):

            #Getting the average speed
            self.avg_speed = self.distance / self.duration

            #Printing the calculated average speed
            print("The averge speed in KM/H is: {}".format(self.avg_speed))
    
    #Creating a car object made a distance of 200KM in 5H
    car = vehicle(200, 5)

    #Calculating average speed
    car.calculate_avg_speed()

###############################################################################################################################################

#Fourteenth task
def task14_func():

    #Local variable used to carry user entered number in string type
    num_str = ""

    #Local variable used to carry user entered number in integer type
    num_integer = 0

    #Local variable used to hold maximum entered number
    max = 0

    #Local variable used to hold minimum entered number (initialized with high number)
    min = 10000

    #Looping over entered user numbers
    while(num_str != "done"):
        
        #Getting the entered string
        num_str = input("Enter a number: ")

        #Trying to cast the entered string
        try:
            #Casting the entered string to integer
            num_integer = int(num_str)

            #Cecking if the maximum number is smaller than the entered number
            if(max < num_integer):
                
                #Set the max variable to new number 
                max = num_integer
            else:

                #Do nothing
                pass

            #Cecking if the minimum number is bigger than the entered number
            if(min > num_integer):
                
                #Set the min variable to new number
                min = num_integer
            else:

                #Do nothing
                pass

        except:

            #Checking if an exception is raised
            if(num_str == "done"):
                
                #Printing the maximum and minimum numbers
                print("Maximum number is: {}".format(max))
                print("Minimum number is: {}".format(min))

            else:

                #Printing invalid input
                print("Invalid input")

###############################################################################################################################################

#Fifteenth task
def task15_func():

    #Opening the entered user file and read it
    file_name = open(input("Enter file name: "), 'r')

    #Read lines of the file and save them in a list
    lines = file_name.readlines()

    #Looping over list elements
    for line in lines:

        #Stripping whitespaces from each line
        line = line.strip()

        #Printing each line in upper case
        print(line.upper())
    
    #closing the file
    file_name.close()

###############################################################################################################################################

#Sixteenth task
def task16_func():

    #Opening user file and reading its contents
    user_file = open("mbox-short.txt", 'r')

    #Local variable used to count the number of lines starting with "From"
    counter = 0

    #looping over file lines
    for i in range(1910):

        #Reading the file line by line
        line = user_file.readline()

        #Splitting the line string twice at each " "
        line = line.split(" ", 2)
        
        #checking if the first word in line is "From"
        if(line[0] == "From"):

            #Increase the lines counter by 1
            counter += 1

            #Printing the email in the "From" line
            print(line[1])
    
    #Printing the number of lines starting with "From"
    print("There were {} lines in the file with \"From\" as the first word".format(counter))

    #Close the file
    user_file.close()

###############################################################################################################################################
###############################################################################################################################################

#Asking the user to enter the task number
task_num = int(input("Please enter task number: "))

#Call the task number 1
if task_num == 1:
    task1_func()

#Call the task number 2
elif task_num == 2:
    task2_func()

#Call the task number 3
elif task_num == 3:
    task3_func()

#Call the task number 4
elif task_num == 4:
    task4_func()

#Call the task number 5
elif task_num == 5:
    task5_func()

#Call the task number 6
elif task_num == 6:
    task6_func()

#Call the task number 7
elif task_num == 7:
    task7_func()

#Call the task number 8
elif task_num == 8:
    task8_func()

#Call the task number 9
elif task_num == 9:
    task9_func()

#Call the task number 10
elif task_num == 10:
    task10_func()

#Call the task number 14
elif task_num == 14:
    task14_func()

#Call the task number 15
elif task_num == 15:
    task15_func()

#Call the task number 16
elif task_num == 16:
    task16_func()

#If any number else entered  
else:
    print("Invalid task number")