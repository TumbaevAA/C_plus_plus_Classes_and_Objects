#include <iostream>
#include <cstdio>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
using namespace std;

int Point::count = 0;
int main()
{
    //Определение расстояния до начала координат с помощью статической функции

    cout << "Determining the distance to the origin\nEnter coordinates of the point: ";
    Point p;
    p.input();
    p.output();
    cout << "\nDistanse to origin = " << Point::distanceToOrigin(p) << "\n";


    cout << "\n\n\nId generation with static field\n";
    Point p1(1, 1), p2(2, 2), p3(3, 3);
    p1.output();
    cout << "\n";
    p2.output();
    cout << "\n";
    p3.output();
    cout << "\n";

    system("pause");
}