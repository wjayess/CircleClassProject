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
	Circle(double);
	// accessors
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
};

#endif