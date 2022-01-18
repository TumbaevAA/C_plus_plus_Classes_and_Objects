#pragma once
#include "Circle.h"
#include <string>
using namespace std;


class ColorCircle : public Circle
{
public:
    string color;

    ColorCircle(Point center, float radius, string color);

    void output();
};

