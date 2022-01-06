#pragma once
class Point
{
private:
	float x, y;
	int id;
	static int count;

public:

	Point();
	Point(int id);
	Point(float x, float y);

	bool input();

	void output();

	float distance(Point end);

	float getX();

	float getY();

	static float distanceToOrigin(Point p);
};

