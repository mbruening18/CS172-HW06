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

Complex::Complex()
{
    a = 0;
    b = 0;
}
Complex::Complex(double A)
{
    a = A;
}
Complex::Complex(double A, double B)
{
    a = A;
    b = B;
}
double Complex::getA()
{
    return a;
}
double Complex::getB()
{
    return b;
}
Complex Complex::add(Complex& c1, Complex& c2)
{
    double newA = c1.getA() + c2.getA();
    double newB = c1.getB() + c2.getB();
    Complex cSum(newA, newB);
    return cSum;
}
Complex subtract(Complex& c1, Complex& c2)
{
    double newA = c1.getA() - c2.getB();
    double newB = c1.getB() - c2.getB();
    Complex cSub(newA, newB);
    return cSub;
}
Complex multiply(Complex& c1, Complex& c2)
{
    double newA = (c1.getA() * c2.getA()) - (c1.getB() * c2.getB());
    double newB = (c1.getB() * c2.getA()) + (c1.getA() * c2.getB());
    Complex cSub(newA, newB);
    return cSub;
}
Complex divide(Complex& c1, Complex& c2)
{
    double newA = ((c1.getA() * c2.getA()) + (c1.getB() * c2.getB())) / ((c2.getA() * c2.getA()) + (c2.getB() * c2.getB()));
    double newB = (c1.getB() * c2.getA()) - (c1.getA() * c2.getB()) / ((c2.getA() * c2.getA()) + (c2.getB() * c2.getB()));
    Complex cDiv(newA, newB);
    return cDiv;
}
double abs(Complex& c1, Complex& c2)
{
    double ABS = pow(pow( c1.getA(), 2) + pow(c1.getB() , 2), 1/2);
    return ABS;
}
