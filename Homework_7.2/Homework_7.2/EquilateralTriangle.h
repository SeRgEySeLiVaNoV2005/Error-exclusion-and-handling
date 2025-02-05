#pragma once

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public: EquilateralTriangle(double a, double b, double c, double A, double B, double C);
	  void printInfo() override;
};