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