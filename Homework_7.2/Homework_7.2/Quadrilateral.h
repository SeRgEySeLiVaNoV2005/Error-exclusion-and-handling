#pragma once

#include "Shape.h"

class Quadrilateral : public Shape {
public:
	Quadrilateral(double aS, double bS, double cS, double dS, double AA, double BA, double CA, double DA);
	void printInfo() override;
protected:
	double a, b, c, d, A, B, C, D;
};