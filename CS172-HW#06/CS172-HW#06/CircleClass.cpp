//
//  CircleClass.cpp
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

#include "CircleClass.hpp"

using namespace std;

//EX06_04 – Liang Programming Exercise 14.3: The Circle class

int Circle::numberOfObjects=0;

//construct a circle object
Circle::Circle()
{
    radius=1;
    numberOfObjects++;
}

//construct a circle object
Circle::Circle(double NewRadius)
{
    radius=NewRadius;
    numberOfObjects++;
}

//Return the area of the circle
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

//Return the radius of this circle
double Circle::getRadius() const
{
    return radius;
}

//Set a new radius
void Circle::setRadius(double newRadius)
{
    radius= (newRadius >= 0) ? newRadius:0;
    
}

//Return the number of circle objects
int Circle::getNumberOfObject()
{
    return numberOfObjects;
}

bool Circle::operator<(Circle& c)
{
    if(getRadius() < c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator<=(Circle& c)
{
    if(getRadius() <= c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator==(Circle& c)
{
    if(getRadius() == c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator!=(Circle& c)
{
    if(getRadius() != c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator>(Circle& c)
{
    if(getRadius() > c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator>=(Circle& c)
{
    if(getRadius() >= c.getRadius())
        return true;
    else
        return false;
}



