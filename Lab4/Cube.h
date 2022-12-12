#pragma once
#include <iostream>
using namespace std;
class Cube
{
	double cStorona;
public:
	Cube();
	Cube(double cStorona);
	double getVolume() const;
	double getArea() const;
	friend ostream& operator<<(ostream& o, const Cube& c);
};


