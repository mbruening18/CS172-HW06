//
//  main.cpp
//  CS172-HW06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

//EX06_01 – Liang Programming Exercise 13.1: Create a text file
//EX06_02 – Liang Programming Exercise 13.2: Count characters
//EX06_03 – Liang Programming Exercise 13.5: Baby names
//EX06_04 – Liang Programming Exercise 14.3: The Circle class
//EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class


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
#include "CountCharacters.hpp"
#include "BabyNames.hpp"
#include "CircleClass.hpp"
#include "ComplexClass.hpp"

using namespace std;

int main()
{
    //EX06_01 – Liang Programming Exercise 13.1: Create a text file
    cout << "Exercise 13.1: Create a text file"<<endl;
    
    createTextFile();
    
    cout << ""<<endl;
    
    
    //EX06_02 – Liang Programming Exercise 13.2: Count characters
    cout << "Exercise 13.2: Count characters"<<endl;
    
    countCharacters();
    
    cout << ""<<endl;
    
    
    //EX06_03 – Liang Programming Exercise 13.5: Baby names
    cout << "Exercise 13.5: Baby names"<<endl;
    
    babyName();
    
    cout << ""<<endl;
    
    //EX06_04 – Liang Programming Exercise 14.3: The Circle class
    cout << "Exercise 14.3: The Circle class"<<endl;
    
    /*
    Circle temp;
    int SIZE =0;
    
    Circle arrayOfCircles[SIZE] = {Circle(3.5), Circle(2.33), Circle(9.81)};
        
    for (int i= 0; i< SIZE-1; i++)
    {
        for (int j=SIZE -1; j>0; j--)
        {
            if (arrayOfCircles[j] < arrayOfCircles[j-1])
            {
                temp = arrayOfCircles[j];
                arrayOfCircles[j] = arrayOfCircles[j-1];
                arrayOfCircles[j-1] =temp;
            }
        }
        for (int i= 0; i< SIZE; i++)
            cout << " Circle [" << i << "]: area of " <<arrayOfCircles[i].getArea() << ", radius of " <<arrayOfCircles[i].getRadius()<<endl;
        }
        
    
    */
    cout << ""<<endl;
    
    //EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class
    cout << "Exercise 14.7: Math: The Complex class"<<endl;
    
   complexClass();

    
    cout << ""<<endl;
    
    return 0;
    
}
