#pragma once

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
	Rectangle(double a, double b, double c, double d, double A, double B, double C, double D);
	void printInfo() override;
};