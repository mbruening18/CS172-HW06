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

//sets the number of objects to zero
int Circle::numberOfObjects=0;

//constructs a circle with radius 1 and counter of number of objects
Circle::Circle()
{
    radius=1;
    numberOfObjects++;
}

//constructs a new circle with new radius and counter of number of objects
Circle::Circle(double NewRadius)
{
    radius=NewRadius;
    numberOfObjects++;
}

//returns the area of a circle r^2 * Pi
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

//returns the radius
double Circle::getRadius() const
{
    return radius;
}

//sets a new radius
void Circle::setRadius(double newRadius)
{
    radius= (newRadius >= 0) ? newRadius:0;
    
}

//returns the number of circle objects
int Circle::getNumberOfObject()
{
    return numberOfObjects;
}

// returns true or false if it is <
bool Circle::operator<(Circle& c)
{
    if(getRadius() < c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// returns true or false if it is <=
bool Circle::operator<=(Circle& c)
{
    if(getRadius() <= c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// returns true or false if it is ==
bool Circle::operator==(Circle& c)
{
    if(getRadius() == c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// returns true or false if it is !=
bool Circle::operator!=(Circle& c)
{
    if(getRadius() != c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// returns true or false if it is >
bool Circle::operator>(Circle& c)
{
    if(getRadius() > c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// returns true or false if it is >=
bool Circle::operator>=(Circle& c)
{
    if(getRadius() >= c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}



