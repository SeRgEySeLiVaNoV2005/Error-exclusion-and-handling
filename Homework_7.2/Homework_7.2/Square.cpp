#include <format>

#include "Square.h"
#include "Exception.h"

Square::Square(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
	nameFigure = "Квадрат";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть положительными\n");
	}
	if (a != b || b != c || c != d) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть равными\n");
	}
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		statusFigure = "не создан";
		throw Exception("\nВсе углы должны быть равны 90\n");
	}
	statusFigure = "создан";
}


void Square::printInfo() {
	cout << format(" ( стороны {}, {}, {}, {}; углы {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}