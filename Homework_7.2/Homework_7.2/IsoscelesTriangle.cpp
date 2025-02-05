#include <format>

#include "IsoscelesTriangle.h"
#include "Exception.h"


IsoscelesTriangle::IsoscelesTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
	nameFigure = "Равнобедренный треугольник";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0) {
		statusFigure = "не создан";
		throw Exception("\nВсе стороны должны быть положительными\n");
	}
	if (a != c) {
		statusFigure = "не создан";
		throw Exception("\nСтороны a и c должны быть равны\n");
	}
	if (A != C) {
		statusFigure = "не создан";
		throw Exception("\nУглы A и C должны быть равны\n");
	}
	statusFigure = "создан";
}

void IsoscelesTriangle::printInfo() {
	cout << format(" ( стороны {}, {}, {}; углы {}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
}
