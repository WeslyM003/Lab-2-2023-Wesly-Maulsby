#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
	Cylinder();
	~Cylinder();

	void setRadius(float radius_);
	float getRadius();
	void setHeight(float height_);
	float getHeight();
	float getVolume();
	float getSurfaceArea();

private:
	float radius;
	float height;
	float volume;
	float surfaceArea;
};

#endif // !CYLINDER_H