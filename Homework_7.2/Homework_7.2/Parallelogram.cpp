#include <format>

#include "Parallelogram.h"
#include "Exception.h"


Parallelogram::Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
	nameFigure = "��������������";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		statusFigure = "�� ������";
		throw Exception("\n������� ������ ���� ��������������\n");
	}
	if (a != c || b != d) {
		statusFigure = "�� ������";
		throw Exception("\n������� ������ ���� ������� ����� ���� �����\n");
	}
	if (A != C || B != D) {
		statusFigure = "�� ������";
		throw Exception("\n��������������� ���� ������ ���� �����\n");
	}
	statusFigure = "������";
}

void Parallelogram::printInfo() {
	cout << format(" ( ������� {}, {}, {}, {}; ���� {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}
