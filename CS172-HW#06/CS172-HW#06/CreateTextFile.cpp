//
//  CreateTextFile.cpp
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

#include "CreateTextFile.hpp"

using namespace std;

//EX06_01 – Liang Programming Exercise 13.1: Create a text file
void createTextFile()
{
    ofstream output;
    
    output.open ("Exercise13_1.txt", fstream::out | fstream::app);
    
    srand ((unsigned int)time(NULL));
    
    for(int i=0; i<100; i++)
    {
        int x = rand() %100;
        output<< x << " "<<endl;
    }
    
    output.close();
}
