#include <format>

#include "Rectangle.h"
#include "Exception.h"


Rectangle::Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
	nameFigure = "Прямоугольник";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть положительными\n");
	}
	if (a != c || b != d) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть попарно равны друг другу\n");
	}
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		statusFigure = "не создан";
		throw Exception("\nВсе углы должны быть 90 градусов\n");
	}
	statusFigure = "создан";
}

void Rectangle::printInfo() {
	cout << format(" ( стороны {}, {}, {}, {}; углы {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}
