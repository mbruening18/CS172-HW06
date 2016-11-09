//
//  CircleClass.hpp
//  CS172-HW#06
//
//  Created by Megan Bruening on 11/4/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include <stdio.h>

//EX06_04 – Liang Programming Exercise 14.3: The Circle class

//creates a circle class
class Circle
{
//makes private
private:
    double radius;
    static int numberOfObjects;

//makes public
public:
    //no-arg constructor
    Circle();
    
    //arg constructor
    Circle(double newRadius);
    
    //gets the area, radius, NumberOfObject
    double getArea()const;
    double getRadius()const;
    static int getNumberOfObject();
    
    //sets the radius
    void setRadius(double newRadius);
    
    //operator for relational 
    bool operator<(Circle& c);
    bool operator<=(Circle& c);
    bool operator==(Circle& c);
    bool operator!=(Circle& c);
    bool operator>(Circle& c);
    bool operator>=(Circle& c);
    
    };

#endif /* CircleClass_hpp */
