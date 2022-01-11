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
    Point twoDimensionalArray[2][3];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            cout << "\nEnter coordinates of the " << j << " point in the " << i << " row" << endl;

            twoDimensionalArray[i][j].input();
            twoDimensionalArray[i][j].output();
        }


    Point pointArray[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter coordinates of the " << i << " point" << endl;
        pointArray[i].input();
        pointArray[i].output();
    }
    
    cout << endl;
    system("pause");
}