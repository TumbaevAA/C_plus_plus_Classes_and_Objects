#pragma once
#include <string>
using namespace std;

class GeometricFigure
{
private:
	string description;
public:
	GeometricFigure(string description);
	GeometricFigure();
	virtual float area() = 0;
	string getDescription();
};

