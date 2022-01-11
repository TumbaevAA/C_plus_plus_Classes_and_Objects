#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{
}

Line::Line(Point start, Point end)
{
	this->startPoint = start;
	this->endPoint = end;
}

bool Line::input()
{
	try {
		Point start, end;

		start.input();
		end.input();
		this->startPoint = start;
		this->endPoint = end;
		return true;
	}
	catch(const char* e){
		cout << e << endl;
		return false;
	}
}

void Line::output()
{
	cout << "Start of the line: ";
	this->startPoint.output();

	cout << "\nEnd of the line: ";
	this->endPoint.output();

	cout << "\nLenght of the line: " << this->lenght();
}

float Line::lenght()
{
	return this->startPoint.distance(this->endPoint);
}

bool Line::isPointOnLine(Point point)
{
	if (&point == nullptr) return false;

	if (this->startPoint.distance(this->endPoint) + this->endPoint.distance(this->startPoint) == this->lenght()) return true; //Если точка на линии, возвращаем true

	return false;
}

Point Line::getStartPoint()
{
	return this->startPoint;
}

Point Line::getEndPoint()
{
	return this->endPoint;
}





