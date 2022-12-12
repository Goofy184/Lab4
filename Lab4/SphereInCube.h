#pragma once
#include"Cube.h"
#include"Sphere.h"
class SphereInCube : public Cube, public Sphere
{
public:
	SphereInCube();
	SphereInCube(double cStorona);
	friend ostream& operator<<(ostream& o, const SphereInCube& c);
};
