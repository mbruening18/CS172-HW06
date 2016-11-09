//
//  main.cpp
//  CS172-HW06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
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
    //EX06_01 – Liang Programming Exercise 13.1: Create a text file//
        cout << "Exercise 13.1: Create a text file"<<endl;
    
        //Implements function
        createTextFile();
    
        cout << " "<<endl;
    
    
    //EX06_02 – Liang Programming Exercise 13.2: Count characters//
        cout << "Exercise 13.2: Count characters"<<endl;
    
        //Implements function
        countCharacters();
    
        cout << " "<<endl;
    
    //EX06_03 – Liang Programming Exercise 13.5: Baby names//
        cout << "Exercise 13.5: Baby names"<<endl;
    
        //Implements function
        babyName();
    
        cout << " "<<endl;
    
    //EX06_04 – Liang Programming Exercise 14.3: The Circle class//
        cout << "Exercise 14.3: The Circle class"<<endl;
    
        //declares Circle and value of circle 1 and 2
        Circle c1(6);
        Circle c2(14);
    
        //Creates if statements with diffrent conditions
        //less-than
        if(c1 < c2)
        {
            cout << "The first circle is smaller than the second circle" << endl;
        }
        //less-than or equal
        if(c1 <= c2)
        {
            cout << "The fist circle is smaller than or equal to the second circle" << endl;
        }
        //equal
        if(c1 == c2)
        {
            cout << "The first circle is equal to the second circle" << endl;
        }
        //not equal
        if(c1 != c2)
        {
            cout << "The first circle is not equal to the second circle" << endl;
        }
        //greater-than
        if(c1 > c2)
        {
            cout << "The first circle is greater than the second circle" << endl;
        }
        //greater-than or equal
        if(c1 >= c2)
        {
            cout << "The first circle is greater than or equal to the second circle" << endl;
        }
   
        cout << " "<<endl;
    
    //EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class
        cout << "Exercise 14.7: Math: The Complex class"<<endl;

        //4 value that takes in a double
        double A;
        double B;
        double C;
        double D;
    
        //enters the 1st set of numbers
        cout << "Enter the first set of complex numbers: ";
        cin >> A >> B;
    
        //enters the 2nd set of numbers
        cout << "Enter the second set of complex numbers: ";
        cin >> C >> D;
    
        //Declares Complex as result, complex1, complex2
        Complex result;
        //compiles variables in complex1 and complex2
        Complex complex1(A, B);
        Complex complex2(C, D);
    
        //result equals the addition of complex1 and complex2
        result = complex1 + complex2;
        //couts the result like the book
        cout << "(" << complex1 << "i) + (" << complex2 << "i) = " << result <<"i" <<endl;
    
        //result equals the subtraction of complex1 and complex2
        result = complex1 - complex2;
        //couts the result like the book
        cout << "(" << complex1 << "i) - (" << complex2 << "i) = " << result <<"i" <<endl;
    
        //result equals the mulitplication of complex1 and complex2
        result = complex1 * complex2;
        //couts the result like the book
        cout << "(" << complex1 << "i) * (" << complex2 << "i) = " << result <<"i" <<endl;

        //result equals the division of complex1 and complex2
        result = complex1 / complex2;
        //couts the result like the book
        cout << "(" << complex1 << "i) / (" << complex2 << "i) = " << result <<"i" <<endl;
    
        //creates double for absolute value
        double abs;
        //does the absolute value of complex1
        abs = complex1.abs();
        //couts the result like the book
        cout << "|" <<complex1 << "i| = " << abs;
    
    
        cout << " "<<endl;

        return 0;
    
}
