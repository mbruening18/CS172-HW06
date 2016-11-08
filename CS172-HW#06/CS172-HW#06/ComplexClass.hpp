//
//  ComplexClass.hpp
//  CS172-HW#06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef ComplexClass_hpp
#define ComplexClass_hpp

#include <stdio.h>
using namespace std;
//EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class

class Complex
{
private:
    double a;
    double b;
    
public:
    Complex();
    Complex(double);
    Complex(double, double);
    
    double getA();
    double getB();
    
    double abs();
    Complex operator+(Complex& num);
    Complex operator-(Complex& num);
    Complex operator*(Complex& num);
    Complex operator/(Complex& num);
    
    friend ostream& operator<<(ostream& str,  Complex& num);
    
};

#endif /* ComplexClass_hpp */
