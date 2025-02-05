#include <format>

#include "IsoscelesTriangle.h"
#include "Exception.h"


IsoscelesTriangle::IsoscelesTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
	nameFigure = "�������������� �����������";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0) {
		statusFigure = "�� ������";
		throw Exception("\n��� ������� ������ ���� ��������������\n");
	}
	if (a != c) {
		statusFigure = "�� ������";
		throw Exception("\n������� a � c ������ ���� �����\n");
	}
	if (A != C) {
		statusFigure = "�� ������";
		throw Exception("\n���� A � C ������ ���� �����\n");
	}
	statusFigure = "������";
}

void IsoscelesTriangle::printInfo() {
	cout << format(" ( ������� {}, {}, {}; ���� {}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
}
