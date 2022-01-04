#include <iostream>
#include <cstdio>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
using namespace std;

int main()
{
    //Определение расстояния до начала координат с помощью статической функции

    cout << "Determining the distance to the origin\nEnter coordinates of the point: ";
    Point p;
    p.input();
    p.output();
    cout << "\nDistanse to origin = " << Point::distanceToOrigin(p) << "\n";

    system("pause");
}