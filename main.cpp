//
// Created by Patricia Figueroa on 2/8/16.
//
// main.cpp utilizes the my_string class
// Takes an input text file of any number of lines
// from either a command line parameter or using the default file name data.txt.

 #include <iostream>
 #include <fstream>
 #include <vector>
 #include "mystring.h"
#include "functions.h"

using namespace hw3;
using namespace std;

int main(int argc, char** argv){
 my_string test;
 int number_of_columns;
 vector<my_string> formatted_text; // vector to hold formatted text.

 ifstream InFile("data.txt"); // open the input file
 if (!InFile.is_open())
  return 0;

 number_of_columns = hw4::Get_Width(); // get number of columns for output //
 hw4::Format_Input(InFile, number_of_columns, formatted_text); //

 InFile.close(); // close input file

 hw3::Display_Output(formatted_text); // Print the output to the screen

 hw3::Save_Output(formatted_text); // output data to file
}

