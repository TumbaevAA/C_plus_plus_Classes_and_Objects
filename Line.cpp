#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{
}

bool Line::init(Point start, Point end)
{
	if (&start == nullptr || &end == nullptr) return false;
	this->startPoint = start;
	this->endPoint = end;

	return true;
}

bool Line::input()
{
	Point start, end;

	if (start.input() && end.input()) this->init(start, end);

	return false;
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

Point Line::getStartPiont()
{
	return this->startPoint;
}

Point Line::getEndPoint()
{
	return this->endPoint;
}





