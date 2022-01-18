#include "ColorCircle.h"
#include <iostream>

ColorCircle::ColorCircle(Point center, float radius, string color) 
	: Circle(center, radius)
{
	this->color = color;
}

void ColorCircle::output()
{
    cout << "Circle\n" << "----------------------------------------------" << endl;
    cout << "Center: ";
    this->center.output();
    cout << "\nRadius = " << this->radius;

    cout << "\n\nCircumference = " << this->circumference();
    cout << "\nArea = " << this->area();
    cout << "\nColor = " << this->color;
    cout << "\n----------------------------------------------";
}
