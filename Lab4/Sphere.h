#pragma once
#include "Cube.h"
#include "Math.h"
#define PI 3.14159265358979323846

using namespace std;

class Sphere
{
	double sRadius;
public:
	Sphere();
	Sphere(double sRadius);
	double getVolume() const;
	double getArea() const;
	friend ostream& operator<<(ostream& o, const Sphere& s);
};
