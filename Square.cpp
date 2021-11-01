#include "Square.h"
#include <iostream>

using namespace std;

Square::Square()
{
}

bool Square::init(Point first, Point second, Point third, Point fourth)
{
    if (&first == nullptr || &second == nullptr || &third == nullptr || &fourth == nullptr) return false;
    float d1 = first.distance(second), d2 = second.distance(third), d3 = third.distance(fourth), d4 = fourth.distance(first);

    if (d1 == 0 || d2 == 0 || d3 == 0 || d4 == 0 ||                                           //≈сли какие-то точки совпадают, возвращаем false
        first.distance(third) == 0 || second.distance(fourth) == 0 ||

        d1 != d2 || d1 != d3 || d1 != d4 || d2 != d3 || d2 != d4 || d3 != d4) {                //≈сли стороны не равны, возвращаем false
        return false;
    }

    this->firstPoint = first;
    this->secondPoint = second;
    this->thirdPoint = third;
    this->fourthPoint = fourth;

    return true;
}

bool Square::input()
{
    Point first, second, third, fourth;
    if (first.input() && second.input() && third.input() && fourth.input()) this->init(first, second, third, fourth);

    return false;
}

void Square::output()
{
    cout << "Square\n" << "----------------------------------------------" << endl;
    cout << "Points\n";

    cout << "first: ";
    this->firstPoint.output();

    cout << "\nsecond: ";
    this->secondPoint.output();

    cout << "\nthird: ";
    this->thirdPoint.output();

    cout << "\nfourth: ";
    this->fourthPoint.output();

    cout << "\n\nLine lengths = " << this->lineLength();

    cout << "\n\nPerimeter = " << this->perimeter();
    cout << "\nArea = " << this->area();
    cout << "\n----------------------------------------------";
}

float Square::lineLength()
{
    return this->firstPoint.distance(this->secondPoint);
}

float Square::perimeter()
{
    return this->lineLength()*4;
}

float Square::area()
{
    return this->lineLength()*this->lineLength();
}


