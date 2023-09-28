#include "Cylinder.h"

Cylinder::Cylinder()
{
}

Cylinder::~Cylinder()
{
}


void Cylinder::setRadius(float radius_)
{
	radius = radius_;
}

float Cylinder::getRadius()
{
	return radius;
}

void Cylinder::setHeight(float height_)
{
	height = height_;
}

float Cylinder::getHeight()
{
	return height;
}

float Cylinder::getVolume()
{
	volume = 3.141592 * radius * radius * height;
	return volume;
}

float Cylinder::getSurfaceArea()
{
	surfaceArea = (2 * 3.141589 * radius * radius) + (2 * 3.141592 * radius * height);
	return surfaceArea;
}