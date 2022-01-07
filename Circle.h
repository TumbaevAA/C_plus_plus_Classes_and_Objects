#pragma once
#include "Point.h"
class Circle
{
private:
	Point center;
	float radius;

public:
	Circle();

	Circle(Point center, float radius);

	bool input();

	void output();

	float area();

	float circumference();

	Point getCenter();

	float getRadius();
};


