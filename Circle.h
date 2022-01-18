#pragma once
#include "Point.h"
class Circle
{
protected:
	Point center;
	float radius;

public:
	Circle();

	Circle(Point center, float radius);

	bool input();

	virtual void output();

	float area();

	float circumference();

	Point getCenter();

	float getRadius();
};


