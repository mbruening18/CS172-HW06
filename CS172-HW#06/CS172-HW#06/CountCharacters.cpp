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
    //declares int count
    int count = 0;
    
    //strings file name
    string fileName;
    
    //lets user enter file name
    cout << "Enter a file name: ";
    getline(cin, fileName);

    //sees if file is there
    fstream iofile(fileName, ios::in);

    //if file is not there out puts file could not be opened
    if ( ! iofile )
    {
        cout << "Error: file could not be opened";
    }
    //else counts the characters in the file
    else
    {
        char characters; //counts the characters
        while(iofile >> characters)
        {
            count++;
        }
        //couts how many characters are in the file
        cout << "This file has " << count << " characters." << endl;
    }
}


