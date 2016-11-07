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
    int array[5], i, j, year, rank, bscore, gscore;
    char ch;
    string name, bname, gname, filename;
    //input from console
    cout << "Enter the year: ";
    cin >> year;
    switch (year)
    {
        case 2010:filename = "Babynameranking2010.txt";
            break;
        case 2011:filename = "Babynameranking2011.txt";
            break;
        case 2012:filename = "Babynameranking2012.txt";
            break;
        case 2013:filename = "Babynameranking2013.txt";
            break;
        case 2014:filename = "Babynameranking2014.txt";
            break;
        default: cout << "wrong entry year!";
    }
    cout << "Enter the gender: ";
    cin >> ch;
    cout << "Enter the name: ";
    cin >> name;
    //open file
    ifstream input(filename.c_str());
    //file not present
    if (input.fail())
    {
        cout << filename << "file not exist. Exit program";
        
    }
    if (!input.eof())
    {
        while (!input.eof())
        {
            input >> rank >> bname >> bscore >> gname >> gscore;
            if (ch == 'M' || ch == 'm')
            {
                if (name == bname)
                {
                    cout << name << "is ranked #" << rank << "in year" << year;
                }
            }
            else if (ch == 'F' || ch == 'f')
            {
                if (name == gname)
                {
                    cout << name << "is ranked #" << rank << "in year" << year;
                }
            }
        }
    }
    input.close();
    
 }
 
    







    
    
    /*
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
    */
    


