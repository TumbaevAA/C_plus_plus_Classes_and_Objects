#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
using namespace std;

int main()
{
    //Тест Point
    Point firstPoint(0, 0), secondPoint;
    cout << "Point test"<< endl << "Enter the coordinates of the second point: ";
    secondPoint.input();

    cin.clear();
    while (cin.get() != '\n');

    cout << "\nThe coordinates of the first point: ";
    firstPoint.output();
    cout << "\nThe coordinates of the second point: ";
    secondPoint.output();
    cout << "\nDistance between points: " << firstPoint.distance(secondPoint);



    //Тест Line
    Line line;
    cout << "\n\n\nLine test" << endl << "Enter the coordinates of the start and the end of the line: ";
    line.input();

    cin.clear();
    while (cin.get() != '\n');

    cout << "\nCoordinates of the line" << endl; 
    line.output();


    //Тест Triangle
    Triangle triangle;
    cout << "\n\n\nTriangle test" << endl << "Enter the coordinates of the first, the second and the third points: ";
    triangle.input();

    cin.clear();
    while (cin.get() != '\n');

    triangle.output();


    return 0;
}

