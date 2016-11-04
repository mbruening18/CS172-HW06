//
//  CountCharacters.cpp
//  CS172-HW#06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <vector>

using namespace std;

#include "CountCharacters.hpp"

//EX06_02 – Liang Programming Exercise 13.2: Count characters
void countCharacters()
{
    string inputFilename;
    cout<<"Enter a file name"<<endl;
    cin>> inputFilename;
    
    int sumChars =0;
    char currentChar;
    
    ifstream input(inputFilename.c_str());
    
    if(input.fail())
    {
        cout<< inputFilename<<" does not exist" <<endl;
    }
    else
    {
        cout<<"Number of characters in File: "<<endl;
        while(input >> currentChar)
        {
            cout<< currentChar<<" ";
            sumChars++;
        }
        
    }
}


