#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;


Point::Point()
{
	count++;
	this->id = count;
}

/* id нельзя назначать через праметр.
Конструктор только демонстрирует работу конструктора
с одним параметром*/
Point::Point(int id)
{
	this->id = id;
}

Point::Point(float x, float y)
{
	count++;
	this->id = count;
	this->x = x;
	this->y = y;
}

Point::Point(const Point& p)
{
	this->x = p.x;
	this->y = p.y;
	count++;
	this->id = count;
}

bool Point::input()
{
	float x, y;
	if (cin >> x >> y) {

		this->x = x;
		this->y = y;
		return true;
	}

	else return false; 
}

void Point::output()
{
	cout << "x = " << this->x << ", y = " << this->y << ", id = " << this->id;
}

float Point::distance(Point end)
{
	if (&end == nullptr) return -1;

	float d1 = end.x - this->x, d2 = end.y - this->y;
	return sqrt(d1 * d1 + d2 * d2);
}

float Point::getX()
{
	return this->x;
}

float Point::getY()
{
	return this->y;
}



float Point::distanceToOrigin(Point p)
{
	Point origin(0, 0);
	return origin.distance(p);
}
