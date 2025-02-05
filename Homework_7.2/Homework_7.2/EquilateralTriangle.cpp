#include <format>

#include "EquilateralTriangle.h"
#include "Exception.h"


EquilateralTriangle::EquilateralTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
	nameFigure = "Равносторонний треугольник";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0) {
		statusFigure = "не создан";
		throw Exception("\nВсе стороны должны быть положительными\n");
	}
	if (a != b || b != c) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должна быть равны между собой\n");
	}
	if (A != 60 || B != 60 || C != 60) {
		statusFigure = "не создан";
		throw Exception("\nВсе углы должны быть 60 градусов\n");
	}
	statusFigure = "создан";
}

void EquilateralTriangle::printInfo() {
	cout << format(" ( стороны {}, {}, {}; углы {}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
}
