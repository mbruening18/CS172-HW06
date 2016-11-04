//
//  ComplexClass.cpp
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

#include "ComplexClass.hpp"

using namespace std;


//EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class
void complexClass()
{
    double A1, A2, B1, B2;
    cout<<"Enter the first complex number: " <<endl;
    cin>>A1>>B1;
    
    cout<<"Enter the second complex number: " <<endl;
    cin>>A2>>B2;
    
    _Complex double num1(A1,B1);
    _Complex double num2(A2,B2);
    _Complex double num3 = num1.add(num2);
    
    cout<<" " << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
    num3 =num1.subtract(num2);
    
    cout<<" " << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
    num3 =num1.multiply(num2);
    
    cout<<" "" << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
    num3 =num1.divide(num2);
    
    cout<<" " << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
}
