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
    cout << "\n\n\Square costructor test\n";
    Point pForSquare(0, 0), pForSquare1(1, 0), pForSquare2(1, 1), pForSquare3(0, 1);
    Square s(pForSquare, pForSquare1, pForSquare2, pForSquare3), s1;
    s.output();
    cout << "\nEnter first, second, third, fourth points of the square\n";
    s1.input();
    s1.output();

    cout << "\n\nDynamic Square costructor test\n";
    Square* sDynamic = new Square(pForSquare, pForSquare1, pForSquare2, pForSquare3), * sDynamic1 = new Square();
    sDynamic->output();
    cout << "\nEnter first, second, third, fourth points of the dynamic square\n";
    sDynamic1->input();
    sDynamic1->output();
    
    delete sDynamic, sDynamic1;

    cout << "\n\n\nTriangle costructor test\n";
    Point pForTriangle(0, 0), pForTriangle1(1, 0), pForTriangle2(0, 1);
    Triangle t(pForTriangle, pForTriangle1, pForTriangle2), t1;
    t.output();
    cout << "\nEnter first, second and third points of the triangle\n";
    t1.input();
    t1.output();

    cout << "\n\nDynamic Triangle costructor test\n";
    Triangle* tDynamic = new Triangle(pForTriangle, pForTriangle1, pForTriangle2), * tDynamic1 = new Triangle();
    tDynamic->output();
    cout << "\nEnter first, second and third points of the dynamic triangle\n";
    tDynamic1->input();
    tDynamic1->output();

    delete tDynamic, tDynamic1;



    cout << "\n\n\nPoint costructor test\n";
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