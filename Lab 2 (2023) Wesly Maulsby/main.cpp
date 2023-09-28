/*Wesly Maulsby
Lab 2
Fall 2023
Get Familiar with headers, specification, and implementation
by making a program that calculates the volume of a cylinder with hardcoded values.
*/

//includes needed files
#include "Cylinder.h"
#include <iostream>


int main()
{
	Cylinder c;
	c.setRadius(2.0);
	c.setHeight(2.0);

	std::cout << "Radius: " << c.getRadius() << std::endl;
	std::cout << "Height: " << c.getHeight() << std::endl;
	std::cout << "Volume: " << c.getVolume() << std::endl;
	std::cout << "Surface Area: " << c.getSurfaceArea() << std::endl;

	return 0;
}

