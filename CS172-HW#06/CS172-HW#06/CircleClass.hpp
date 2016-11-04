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

class Circle
{
private:
    double radius;
    static int numberOfObjects;
    
public:
    Circle();
    Circle(double newRadius);
    double getArea()const;
    double getRadius()const;
    void setRadius(double newRadius);
    static int getNumberOfObject();
};

#endif /* CircleClass_hpp */
