//
//  BabyNames.cpp
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

#include "BabyNames.hpp"

using namespace std;

//EX06_03 – Liang Programming Exercise 13.5: Baby names
void babyName()
{
    string year;
    cout<<"Enter the year:";
    cin>>year;
    
    string gender;
    cout<<"Enter the gender:";
    cin>>gender;
    
    
    string name;
    cout<<"Enter the name:";
    cin>>name;

    ifstream babyFile;
    babyFile.open("Babynameranking2010.txt", fstream::in);
    babyFile.open("Babynameranking2011.txt", fstream::in);
    babyFile.open("Babynameranking2012.txt", fstream::in);
    babyFile.open("Babynameranking2013.txt", fstream::in);
    babyFile.open("Babynameranking2014.txt", fstream::in);
    
    
    string femaleName;
    string maleName;
    string rank;
    
    
    if (  !babyFile.eof() ) // check to see if the file exists already or not
    {
        
        cout << "Error: file could not be opened "<<endl;
    }
    
    else
    {
        babyFile >> rank >> maleName >> femaleName;
        
        cout << rank << " " << maleName << " " << femaleName << endl;
        
        if ( maleName == name )
        {
            cout << "Male ranking is " << rank << endl;
        }
        if ( femaleName == name )
        {
            cout << "Female ranking is " << rank << endl;
        }
        
        
    }

    babyFile.close();
    
    
}

