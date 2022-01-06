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
    cout << "Point costructor test\n";
    Point p(3, 4), p1(1234), p2;
    p.output();
    cout << "\n";
    cout << "Enter coordinates of the second point\n";
    p1.input();
    p1.output();
    cout << "\n";
    cout << "Enter coordinates of the third point\n";
    p2.input();
    p2.output();
    cout << "\n";

    cout << "\nDynamic Point constructor test\n";
    Point* pDynamic = new Point(3, 4), *pDynamic1 = new Point(1234),
        *pDynamic2 = new Point();
    pDynamic->output();
    cout << "\n";
    cout << "Enter coordinates of the second point\n";
    pDynamic1->input();
    pDynamic1->output();
    cout << "\n";
    cout << "Enter coordinates of the third point\n";
    pDynamic2->input();
    pDynamic2->output();
    cout << "\n";

    delete pDynamic2;

    system("pause");
}