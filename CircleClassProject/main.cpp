// William Smith, CISP 1020, Class Program, 03/24/2022

// This program allows users to enter a radius of a circle, and recieve other dimensions based on the radius.

#include "main.h"
#include "Circle.h"

using namespace std;

int main()
{
	double radiusInput;

	cout << "Input the circle's radius: ";
	cin >> radiusInput;

	Circle userCircle(radiusInput);

	cout << "Radius: " << userCircle.getRadius() << endl;
	cout << "Area: " << userCircle.getArea() << endl;
	cout << "Diameter: " << userCircle.getDiameter() << endl;
	cout << "Circumference: " << userCircle.getCircumference() << endl;
}