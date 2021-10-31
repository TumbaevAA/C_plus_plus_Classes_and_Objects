#pragma once
#include "Point.h"

class Triangle
{
private:
	Point firstPoint, secondPoint, thirdPoint;

public:
	Triangle();

	bool init(Point first, Point second, Point third);

	bool input();

	void output();

	float lineLength(int lineNumber);

	float perimeter();

	float area();
}; 
