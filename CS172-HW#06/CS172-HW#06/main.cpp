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
    
    cout << " "<<endl;
    
    
    //EX06_02 – Liang Programming Exercise 13.2: Count characters
    cout << "Exercise 13.2: Count characters"<<endl;
    
    countCharacters();
    
    cout << " "<<endl;
    cout << " "<<endl;
    
    //EX06_03 – Liang Programming Exercise 13.5: Baby names
    cout << "Exercise 13.5: Baby names"<<endl;
    
    babyName();
    
    
    cout << " "<<endl;
    
    //EX06_04 – Liang Programming Exercise 14.3: The Circle class
    cout << "Exercise 14.3: The Circle class"<<endl;
    
    Circle c1(6);
    Circle c2(14);
    
    if(c1 < c2)
        cout << "The first circle is smaller than the second circle" << endl;
    if(c1 <= c2)
        cout << "The fist circle is smaller than or equal to the second circle" << endl;
    if(c1 == c2)
        cout << "The first circle is equal to the second circle" << endl;
    if(c1 != c2)
        cout << "The first circle is not equal to the second circle" << endl;
    if(c1 > c2)
        cout << "The first circle is greater than the second circle" << endl;
    if(c1 >= c2)
        cout << "The first circle is greater than or equal to the second circle" << endl;

   
    cout << " "<<endl;
    
    //EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class
    cout << "Exercise 14.7: Math: The Complex class"<<endl;

    double A;
    double B;
    double C;
    double D;
    
    cout << "Enter the first complex number: ";
    cin >> A >> B;
    cout << "Enter the second complex number: ";
    cin >> C >> D;
    Complex result;
    Complex complex1(A, B);
    Complex complex2(C, D);
    result = complex1 + complex2;
    result = complex1 - complex2;
    result = complex1 * complex2;
    result = complex1 / complex2;
    
    double abs;
    abs = complex1.abs();

    cout << "(" << complex1 << "i) + (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "(" << complex1 << "i) - (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "(" << complex1 << "i) * (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "(" << complex1 << "i) / (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "|" <<complex1 << "i| = " << abs;
    


    cout << " "<<endl;

    return 0;
    
}
