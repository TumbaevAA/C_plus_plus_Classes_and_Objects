#pragma once
#include "GeometricFigure.h"
#include "Point.h"

class Circle : public GeometricFigure
{
protected:
	Point center;
	float radius;

public:
	Circle();

	Circle(string description);

	Circle(Point center, float radius);

	bool input();

	virtual void output();

	float area();

	float circumference();

	Point getCenter();

	float getRadius();
};


