#include <format>

#include "RightTriangle.h"
#include "Exception.h"


RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
	nameFigure = "Прямоугольный треугольник";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0) {
		statusFigure = "не создан";
		throw Exception("\nВсе стороны должны быть положительными\n");
	}
	if (C != 90) {
		statusFigure = "не создан";
		throw Exception("\nУгол С не равен 90\n");
	}
	statusFigure = "создан";
}

void RightTriangle::printInfo() {
	cout << format(" (стороны{}, {}, {}; углы{}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
}
