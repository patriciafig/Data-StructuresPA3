//
// Created by Patricia Figueroa on 2/9/16.
//


#ifndef FUNC_hw3
#define FUNC_hw3

#include <vector>
#include <iostream>
#include "mystring.h"
using namespace std;
namespace hw3

{
    ifstream Open_Input(int& exist_test, char** filename);
    int Get_Width();
    void Format_Input(ifstream& InFile, const int& text_width, vector<my_string>& lines);
    void Display_Output(vector<my_string>& text);
    void Save_Output(vector<my_string>& text);
}
#endif
