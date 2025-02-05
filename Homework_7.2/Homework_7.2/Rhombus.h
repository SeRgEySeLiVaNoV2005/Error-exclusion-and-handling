#pragma once

#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
	Rhombus(double a, double b, double c, double d, double A, double B, double C, double D);
	void printInfo() override;
};