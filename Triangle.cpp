#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle()
{
}

Triangle::Triangle(Point first, Point second, Point third)
{
    float d1 = first.distance(second), d2 = second.distance(third), d3 = third.distance(first);

    if (d1 == 0 || d2 == 0 || d3 == 0 ||                      //≈сли какие-то точки совпадают, не инициализируем
        d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2) {    //≈сли точка лежит на отрезке между двум€ другими - не инициализируем
    
        throw "Wrong arguments";
    }   
    else {
        this->firstPoint = first;
        this->secondPoint = second;
        this->thirdPoint = third;
    }
}
bool Triangle::input()
{
    try {
        Point first, second, third;
        if (first.input() && second.input() && third.input()) {
            this->firstPoint = first;
            this->secondPoint = second;
            this->thirdPoint = third;

            float d1 = first.distance(second), d2 = second.distance(third), d3 = third.distance(first);

            if (d1 == 0 || d2 == 0 || d3 == 0 ||                      //≈сли какие-то точки совпадают, не инициализируем
                d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2) {    //≈сли точка лежит на отрезке между двум€ другими - не инициализируем

                throw "Wrong arguments";
            }

            return true;
        }
    }
    catch (const char* e) {
        cout << e << endl;
        return false;
    }
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
    if (lineNumber < 1 || lineNumber>3)  throw "Wrong line number";

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
    return  sqrtf(semiPerimeter * (semiPerimeter - this->lineLength(1)) * (semiPerimeter - this->lineLength(2)) * (semiPerimeter - this->lineLength(3))); //‘ормула √ерона
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
 

