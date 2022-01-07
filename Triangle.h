#pragma once
#include "Point.h"

class Triangle
{
private:
	Point firstPoint, secondPoint, thirdPoint;

public:
	Triangle();

	Triangle(Point first, Point second, Point third);

	bool input();

	void output();

	float lineLength(int lineNumber);

	float perimeter();

	float area();

	Point getFirstPoint();
	Point getSecondPoint();
	Point getThirdPoint();
}; 
