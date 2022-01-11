﻿#include <iostream>
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