#pragma once
class Point
{
private:
	float x, y;

public:
	Point();
	Point(float x, float y);

	bool Input();

	void Output();

	float PointDistance(Point end);

	float GetX();

	float GetY();

};

