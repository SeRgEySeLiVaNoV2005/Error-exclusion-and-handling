#include <format>

#include "Parallelogram.h"
#include "Exception.h"


Parallelogram::Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
	nameFigure = "Параллелограмм";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть положительными\n");
	}
	if (a != c || b != d) {
		statusFigure = "не создан";
		throw Exception("\nСтороны должны быть попарно равны друг другу\n");
	}
	if (A != C || B != D) {
		statusFigure = "не создан";
		throw Exception("\nПротивоположные углы должны быть равны\n");
	}
	statusFigure = "создан";
}

void Parallelogram::printInfo() {
	cout << format(" ( стороны {}, {}, {}, {}; углы {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}
