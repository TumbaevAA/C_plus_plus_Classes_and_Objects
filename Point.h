#pragma once
class Point
{
private:
	float x, y;

public:
	Point();
	Point(float x, float y);

	bool input();

	void output();

	float distance(Point end);

	float getX();

	float getY();


	bool friend setPointCoordinates(Point& p, float x, float y);
};

