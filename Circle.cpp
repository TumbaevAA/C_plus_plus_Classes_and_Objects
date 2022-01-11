#include "Circle.h"
#include <iostream>
using namespace std;
#define PI 3.1415926535

Circle::Circle()
{
}

Circle::Circle(Point center, float radius)
{
    if (radius < 0) throw "Radius less than zero";

    this->center = center;
    this->radius = radius;
}

bool Circle::input()
{
    Point center;
    float radius;
    try {
        if (center.input() && cin >> radius && radius >= 0) {
            this->center = center;
            this->radius = radius;

            return true;
        }
        else {
            throw "Invalid input";
        }
    }
    catch (const char* e) {
        cout << e << endl;
    }
}

void Circle::output()
{
    cout << "Circle\n" << "----------------------------------------------" << endl;
    cout << "Center: ";
    this->center.output();
    cout << "\nRadius = " << this->radius;

    cout << "\n\nCircumference = " << this->circumference();
    cout << "\nArea = " << this->area();
    cout << "\n----------------------------------------------";
}

float Circle::area()
{
    return PI * this->radius * this->radius;
}

float Circle::circumference()
{
    return 2 * PI * this->radius;
}

Point Circle::getCenter()
{
    return this->center;
}

float Circle::getRadius()
{
    return this->radius;
}




