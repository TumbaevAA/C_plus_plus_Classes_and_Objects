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
	Point(const Point& p);
	Point& operator = (const Point& p);

	bool input();

	void output();

	float distance(Point end);

	float getX();

	float getY();

	static float distanceToOrigin(Point p);
};

