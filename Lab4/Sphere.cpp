#include "Sphere.h"

Sphere::Sphere()
{
}

Sphere::Sphere(double sRadius) {
	this->sRadius = sRadius;
};

double Sphere::getVolume() const {
	return ((4 * PI * pow(sRadius, 3)) / 3);
};
double Sphere::getArea() const {
	return 4 * PI * pow(sRadius, 2);
};

ostream& operator<<(ostream& o, const Sphere& s)
{
	o << "Sphere radius: " << s.sRadius << endl
		<< "Sphere volume: " << s.getVolume() << endl
		<< "Sphere area: " << s.getArea() << endl;
	return o;
}
