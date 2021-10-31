#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    //Тест Point
    Point firstPoint(0, 0), secondPoint;
    cout << "Point test"<< endl << "Enter the coordinates of the second point: ";
    secondPoint.input();
    cout << "\nThe coordinates of the first point: ";
    firstPoint.output();
    cout << "\nThe coordinates of the second point: ";
    secondPoint.output();
    cout << "\nDistance between points: " << firstPoint.distance(secondPoint);


    return 0;
}

