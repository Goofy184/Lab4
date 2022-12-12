#include "Cube.h"
#include "Math.h"
Cube::Cube(double cStorona) {
	this->cStorona = cStorona;
}
Cube::Cube() {
}
double Cube::getVolume() const {
	return pow(cStorona, 3);
};
double Cube::getArea() const {
	return pow(cStorona, 2) * 6;
};

ostream& operator<<(ostream& o, const Cube& c)
{
	o << "Cube storona: " << c.cStorona << endl
		<< "Cube volume: " << c.getVolume() << endl
		<< "Cube area: " << c.getArea() << endl;
	return o;
}
