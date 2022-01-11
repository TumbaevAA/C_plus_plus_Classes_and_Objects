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
    //Тест Circle
    try {
        Point p(0, 0);
        Circle c(p, -1);
    }
    catch (const char* e) {
        cout << e << endl;
    }

    Circle c1;
    c1.input();


    //Тест Square 
    try {
        Point pForSquare(0, 0);
        Square s(pForSquare, pForSquare, pForSquare, pForSquare);
    }
    catch (const char* e) {
        cout << e << endl;
    }
    Square s1;
    s1.input();

    //Тест Triangle
    Point pForTriangle(0, 0), pForTriangle1(1, 0), pForTriangle2(0, 1);
    try {
        Triangle t(pForTriangle, pForTriangle, pForTriangle);
    }
    catch (const char* e) {
        cout << e << endl;
    }
    Triangle t1(pForTriangle, pForTriangle1, pForTriangle2);
    try {
        cout << t1.lineLength(4);
    }
    catch (const char* e) {
        cout << e << endl;
    }
    t1.input();


    //Тест Line
    Line l;
    l.input();

    //Тест Point
    Point p;
    try {
        p.input();
    }
    catch (const char* e){
        cout << e << endl;
    }


    system("pause");
}