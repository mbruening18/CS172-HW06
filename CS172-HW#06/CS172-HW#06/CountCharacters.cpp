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
    
    ifstream iofile(fileName); //Open a file for input/output
    if ( ! iofile ) // check to see if the file exists already or not
    {
        
        cout << "Error: file could not be opened ";
    }
    
    else
    {
        char characters;
        
        while(iofile >> characters)
        {
            count++;
        }
        iofile.clear();
        iofile.seekg(0, ios::end);
        //iofile << "This file has " << count << " characters." << endl;
    }
    iofile.close();
    
    
}


