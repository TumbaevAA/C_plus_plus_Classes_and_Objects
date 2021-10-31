#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point()
{
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
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
	cout << "x = " << this->x << ", y = " << this->y;
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
