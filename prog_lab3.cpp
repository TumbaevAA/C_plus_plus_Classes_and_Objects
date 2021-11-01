#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
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



    //Тест Square
    Square square;
    cout << "\n\n\Square test" << endl << "Enter the coordinates of the first, the second, the third and the fourth points: ";
    square.input();

    cin.clear();
    while (cin.get() != '\n');

    square.output();

    //Тест Circle
    Circle circle;
    cout << "\n\n\Circle test" << endl << "Enter the coordinates of the center and the radius: ";
    circle.input();

    cin.clear();
    while (cin.get() != '\n');

    circle.output();

    
    //Создание динамического массива объектов класса Point
    int n;

    cout << "\n\nCreating a dynamic array of objects of the Point class\n";
    cout << "Enter array length: ";
    cin >> n;

    Point* arr = new Point[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter the coordinates of the " << i << " point: ";
        arr[i].input();

        cin.clear();
        while (cin.get() != '\n');
    }

    cout << "\n\nPoints in dynamic array:";
    for (int i = 0; i < n; i++){
        cout << "\n";
        arr[i].output();
    }

    delete[] arr;



    return 0;
}

