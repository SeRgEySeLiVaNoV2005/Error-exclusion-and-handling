#pragma once

#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
	Square(double a, double b, double c, double d, double A, double B, double C, double D);
	void printInfo() override;
};