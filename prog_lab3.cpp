#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    //Тест Point
    Point firstPoint(0, 0), secondPoint;
    cout << "Point test"<< endl << "Enter the coordinates of the second point: ";
    secondPoint.Input();
    cout << "\nThe coordinates of the first point: ";
    firstPoint.Output();
    cout << "\nThe coordinates of the second point: ";
    secondPoint.Output();
    cout << "\nDistance between points: " << firstPoint.PointDistance(secondPoint);


    return 0;
}

