#pragma once
#include "Point.h"
class Square
{
private:
	Point firstPoint, secondPoint, thirdPoint, fourthPoint;

public:
	Square();

	bool init(Point first, Point second, Point third, Point fourth);

	bool input();

	void output();

	float lineLength();

	float perimeter();

	float area();
};

