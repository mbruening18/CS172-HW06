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
    
    Complex add(Complex&, Complex&);
    Complex subtract(Complex&, Complex&);
    Complex multiply(Complex&, Complex&);
    Complex divide(Complex&, Complex&);
    double abs(Complex&, Complex&);
};

#endif /* ComplexClass_hpp */
