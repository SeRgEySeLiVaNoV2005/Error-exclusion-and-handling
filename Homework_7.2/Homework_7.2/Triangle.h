#pragma once

#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(double aS, double bS, double cS, double AA, double BA, double CA);
	void printInfo() override;
protected:
	double a, b, c, A, B, C;
};