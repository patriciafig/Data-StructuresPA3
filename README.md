# Data-StructuresPA3
*******************************************************
*  Name      : Patricia Figueroa
*  Class     :  CSC 2421
*  HW#       :  3
*  Due Date  :  Feb.10, 2016
*******************************************************
                 Read Me
*******************************************************
*  Description of the program
*******************************************************

The program "hw3” asks the user for an input for the number
of columns to format the text accordingly.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls functions
   to read and display the characters in such format as inputed by the
   user.

Name: my_string.h
Contains the definition of the class my_string

Name: my_string.cpp
Contains and describes the implementation of the class my_string.

Name: functions.h
This file contains the functions for hw4, allows the text to be formatted in such way
as the user has inputed the length for the amount of characters to be displayed. 

Name: functions.cpp
Contains the implementation of the functions.

*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully. The program was developed and 
tested on Mac OS X El Capitan 10.11.03 on Xcode. It was
 It was compiled, run, and tested on GNU g++ version 4.4 and Xcode.

*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.
   To uncompress it use the following commands
       % unzip [Patricia_FigueroaHW#3]

   Now you should see a directory named homework with the files:
        main.cpp
        my_string.h
        my_string.cpp
        functions.h
        functions.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [Patricia_FigueroaHW#3]

    Compile the program by:
    % make

3. Run the program by:
   % ./[my_string]

4. Delete the obj files, executables, and core dump by
   %./make clean
