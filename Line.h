#pragma once
#include "Point.h"

class Line
{
private:
	Point startPoint, endPoint;

public:
	Line();
	
	Line(Point start, Point end);

	bool input();

	void output();

	float lenght();

	bool isPointOnLine(Point point);

	Point getStartPiont();

	Point getEndPoint();
};

