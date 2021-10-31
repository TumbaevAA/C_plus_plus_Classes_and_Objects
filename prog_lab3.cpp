#include <iostream>
#include "Point.h"
#include "Line.h"
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
    Line firstLine(firstPoint, secondPoint), secondLine;
    cout << "\n\n\nLine test" << endl << "Enter the coordinates of the start and the end of the second line: ";
    secondLine.input();

    cin.clear();
    while (cin.get() != '\n');

    cout << "\nCoordinates of the first line" << endl; 
    firstLine.output();
    cout << "\n\nCoordinates of the second line" << endl;
    secondLine.output();

    return 0;
}

