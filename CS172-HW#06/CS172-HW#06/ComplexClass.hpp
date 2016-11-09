//
//  ComplexClass.hpp
//  CS172-HW#06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//

#ifndef ComplexClass_hpp
#define ComplexClass_hpp

#include <stdio.h>
using namespace std;
//EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class

//creates a Complex class
class Complex
{
//makes private
private:
    double a;
    double b;
    
//makes public
public:
    //no-arg constructor
    Complex();
    //arg constructor takes 2 variable
    Complex(double A, double B);
    
    
    //gets a double from A and B
    double getA();
    double getB();
    
    //double for absolute value
    double abs();
    
    //complex operator for each +, -, *, /
    Complex operator+(Complex& num);
    Complex operator-(Complex& num);
    Complex operator*(Complex& num);
    Complex operator/(Complex& num);
    
    //makes it friendly so can use operator
    friend ostream& operator<<(ostream& str,  Complex& num);
    
};

#endif /* ComplexClass_hpp */
