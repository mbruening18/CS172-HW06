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
    int count = 0;
    string fileName;
    cout << "Enter a file name: ";
    getline(cin, fileName);

    fstream iofile(fileName, ios::in);

    if ( ! iofile )
    {
        cout << "Error: file could not be opened ";
    }
    else
    {
        char characters; //counts the characters
        while(iofile >> characters)
        {
            count++;
        }
        cout << "This file has " << count << " characters." << endl;
    }
}


