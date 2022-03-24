// Circle class implementation

#include "Circle.h"

Circle::Circle(double inRadius)
{
	radius = inRadius;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return pi * radius * radius;
}
double Circle::getDiameter() const
{
	return radius * 2;
}
double Circle::getCircumference() const
{
	return 2 * pi * radius;
}