#include "SphereInCube.h"

SphereInCube::SphereInCube() : Cube(), Sphere()
{
}

SphereInCube::SphereInCube(double cStorona) : Cube(cStorona), Sphere(cStorona / 2)
{
}

ostream& operator<<(ostream& o, const SphereInCube& c)
{
	o << (Cube)c << endl;
	o << (Sphere)c << endl;
	return o;
}
