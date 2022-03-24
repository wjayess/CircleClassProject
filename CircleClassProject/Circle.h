// Circle class specification

#ifndef CIRCLE_H
#define CIRCLE_H

// Circle class
// all variables will be private, only accessable by the classes member functions
// all inline, because why not?
class Circle {
private:
	double radius;
	double pi = 3.14159;
public:
	// constructor
	Circle(double inRadius)
	{ radius = inRadius; }
	// accessors
	double getRadius() const
	{ return radius; }
	double getArea() const
	{ return pi * radius * radius; }
	double getDiameter() const
	{ return radius * 2; }
	double getCircumference() const
	{ return 2 * pi * radius; }
};

#endif