#include <format>

#include "Rhombus.h"
#include "Exception.h"


Rhombus::Rhombus(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
	nameFigure = "Ромб";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть положительными\n");
	}
	if (a != b || b != c || c != d) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть равными\n");
	}
	if (A != C || B != D) {
		statusFigure = "не создан";
		throw Exception("\nПротивоположные углы должны быть равны\n");
	}
	statusFigure = "создан";
}

void Rhombus::printInfo() {
	cout << format(" ( стороны {}, {}, {}, {}; углы {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}
