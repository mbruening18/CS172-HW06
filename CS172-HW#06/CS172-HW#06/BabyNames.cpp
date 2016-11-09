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
    //creates integer for year and rank
    int year;
    int rank;
    //strings boy and girls score
    string bscore;
    string gscore;
    
    //strings the name of the character that is entered
    char ch;
    string name;
    string bname;
    string gname;
    string filename;
  
    //lets the user enter the year
    cout << "Enter the year: ";
    cin >> year;
    
    //option of which year user enters
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
    
    //lets the user enter the gender in F,f or M,m
    cout << "Enter the gender: ";
    cin >> ch;
    //lets the user enter a name first inital has to be capitalized
    cout << "Enter the name: ";
    cin >> name;
    
    //inputs
    ifstream input(filename.c_str());
    
    //checks if file does not exist
    if (input.fail())
    {
        cout << filename << "File not exist. Exit program";
        
    }
    //if fileexists goes through steps
    if (!input.eof())
    {
        //while does not have input
        while (!input.eof())
        {
            //inputs the rank, boy name, boys score, girl name, girl score
            input >> rank >> bname >> bscore >> gname >> gscore;
            //if entered M,m for gender
            if (ch == 'M' || ch == 'm')
            {
                //if name equals boys name couts the name and rank in the year they entered
                if (name == bname)
                {
                    cout << name << " is ranked #" << rank << " in year " << year<<endl;
                }
            }
            //else if entered F,f for gender
            else if (ch == 'F' || ch == 'f')
            {
                //if name equals girls name couts the name and rank in the year they entered
                if (name == gname)
                {
                    cout << name << " is ranked #" << rank << " in year " << year<<endl;
                }
            }
        }
    }
    //clouses the file
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
    


