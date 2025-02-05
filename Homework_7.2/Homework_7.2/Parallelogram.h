#pragma once

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
	Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D);
	void printInfo() override;
};