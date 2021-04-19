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
    
        #Printing the even numbers list
        print("The even numbers list is: {}".format(even_list))

    #Calling sum function
    is_even_num_func(my_list)    

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