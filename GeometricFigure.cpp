#include "GeometricFigure.h"

GeometricFigure::GeometricFigure(string description)
{
    this->description = description;
}

GeometricFigure::GeometricFigure()
{
}

string GeometricFigure::getDescription()
{
    return this->description;
}
