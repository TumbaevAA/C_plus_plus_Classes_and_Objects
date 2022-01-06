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

    cout << "\n\n\nLine costructor test\n";
    Line l(p, p1), l1;
    l.output();
    cout << "\n";
    cout << "Enter start and end points of the line\n";
    l1.input();
    l1.output();
    cout << "\n";

    cout << "\nDynamic Line constructor test\n";
    Line *lDynamic = new Line(*pDynamic, *pDynamic1), *lDynamic1 = new Line();
    lDynamic->output();
    cout << "\n";
    cout << "Enter start and end points of the line\n";
    lDynamic1->input();
    lDynamic1->output();
    cout << "\n";
    
    delete lDynamic, lDynamic1, pDynamic, pDynamic1;


    system("pause");
}