//
//  ComplexClass.cpp
//  CS172-HW#06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
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

//declares variables = to zero
Complex::Complex()
{
    a = 0;
    b = 0;
}

//sets variables to new variables
Complex::Complex(double A, double B)
{
    a = A;
    b = B;
}

//returns a
double Complex::getA()
{
    return a;
}

//returns b
double Complex::getB()
{
    return b;
}

//finds absolute value formula and returns
double Complex::abs()
{
    double ABS = pow(pow(getA(), 2) + pow(getB() , 2), .5);
    return ABS;
}

//returns operator + for formula
Complex Complex::operator+(Complex& num)
{
    return Complex(this->a+num.getA(), this->b+num.getB());
}

//returns operator - for formula
Complex Complex:: operator-(Complex& num)
{
    return Complex(this->a-num.getA(), this->b-num.getB());
}

//returns operator * for formula
Complex Complex::operator*(Complex& num)
{
    return Complex(this->a*num.getA() - b*num.getB(), this->b*num.getA() + a*num.getB());
}

//returns operator / for formula
Complex Complex::operator/(Complex& num)
{
    return Complex((this->a*num.getA() + b*num.getB())/(num.getA()*num.getA()+ num.getB()*num.getB()),
                   (this->b*num.getA() - a*num.getB())/(num.getA()*num.getA()+ num.getB()*num.getB()));
}

//keeps it friendly and able to use addition of complex1 and complex2
ostream& operator<<(ostream& str, Complex& num)
{
    str<< num.getA() <<" + "<< num.getB();
    return str;
}





