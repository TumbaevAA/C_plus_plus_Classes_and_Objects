#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle()
{
}

bool Triangle::init(Point first, Point second, Point third)
{
    if (&first == NULL || &second == NULL || &third == NULL) return false;

    float d1 = first.distance(second), d2 = second.distance(third), d3 = third.distance(first);

    if (d1 == 0 || d2 == 0 || d3 == 0 ||                      //Если какие-то точки совпадают, возвращаем false
        d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2) {     //Если точка лежит на отрезке между двумя другими - false
        return false;
    }

    this->firstPoint = first;
    this->secondPoint = second;
    this->thirdPoint = third;

    return true;
}

bool Triangle::input()
{
    Point first, second, third;
    if (first.input() && second.input() && third.input()) this->init(first, second, third);

    return false;
}

void Triangle::output()
{
    cout << "Triangle\n" << "----------------------------------------------" << endl;
    cout << "Points\n";

    cout << "first: ";
    this->firstPoint.output();

    cout << "\nsecond: ";
    this->secondPoint.output();

    cout << "\nthird: ";
    this->thirdPoint.output();

    cout << "\n\nLine lengths\n";
    cout << "first = " << this->lineLength(1);
    cout << "\nsecond = " << this->lineLength(2);
    cout << "\nthird = " << this->lineLength(3);

    cout << "\n\nPerimeter = " << this->perimeter();
    cout << "\nArea = " << this->area();
    cout << "\n----------------------------------------------";
}

float Triangle::lineLength(int lineNumber)
{
    if (lineNumber < 1 || lineNumber>3) return -1;

    switch (lineNumber) {
    case 1:
        return this->firstPoint.distance(this->secondPoint);
        break;

    case 2:
        return this->secondPoint.distance(this->thirdPoint);
        break;

    case 3:
        return this->thirdPoint.distance(this->firstPoint);
        break;
    }
}

float Triangle::perimeter()
{
    float perimeter = 0;
    for (int i = 1; i < 4; i++) {
        perimeter += this->lineLength(i);
    }
    
    return perimeter;
}

float Triangle::area()
{
    float semiPerimeter = this->perimeter() / 2;
    return  sqrtf(semiPerimeter * (semiPerimeter - this->lineLength(1)) * (semiPerimeter - this->lineLength(2) * (semiPerimeter - this->lineLength(3)))); //Формула Герона
}

Point Triangle::getFirstPoint()
{
    return this->firstPoint;
}

Point Triangle::getSecondPoint()
{
    return this->secondPoint;
}

Point Triangle::getThirdPoint()
{
    return this->thirdPoint;
}
 

