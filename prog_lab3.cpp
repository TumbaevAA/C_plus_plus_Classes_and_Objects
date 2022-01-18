#include <iostream>
#include <cstdio>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include "ColorCircle.h"
using namespace std;

int Point::count = 0;
int main()
{
    Point center(0, 0);

    Circle c1("new circle");

    cout << c1.getDescription() << endl;

    ColorCircle colorCircle(center, 4, "white");

    colorCircle.output();

    Circle& circle = colorCircle;

    cout << endl;
    circle.output();
   

    cout << endl;
    system("pause");
}