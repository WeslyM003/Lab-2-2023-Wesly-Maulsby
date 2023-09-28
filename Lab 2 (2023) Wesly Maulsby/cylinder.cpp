#include "Cylinder.h"

//constructor
Cylinder::Cylinder()
{
}

//destructor
Cylinder::~Cylinder()
{
}

//set function for radius
void Cylinder::setRadius(float radius_)
{
	radius = radius_;
}

//gets the radius and returns it
float Cylinder::getRadius()
{
	return radius;
}

//set function for height
void Cylinder::setHeight(float height_)
{
	height = height_;
}

//gets cylinder height and returns it
float Cylinder::getHeight()
{
	return height;
}

//calculates volume and returns it
float Cylinder::getVolume()
{
	volume = 3.141592 * radius * radius * height;
	return volume;
}

// calculates surface area and returns it
float Cylinder::getSurfaceArea()
{
	surfaceArea = (2 * 3.141589 * radius * radius) + (2 * 3.141592 * radius * height);
	return surfaceArea;
}