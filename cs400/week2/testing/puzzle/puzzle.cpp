#include <iostream>
#include "Cube.h"
using uiuc::Cube;

Cube *CreateUnitCube() {
	Cube cube;
	cube.setLength(15);
	return &cube;
}

int main() {
	Cube *c = CreateUnitCube();
	double a = c->getSurfaceArea();
	double v = c->getVolume();
	return 0;
}
