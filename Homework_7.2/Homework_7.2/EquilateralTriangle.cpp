#include <format>

#include "EquilateralTriangle.h"
#include "Exception.h"


EquilateralTriangle::EquilateralTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
	nameFigure = "�������������� �����������";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0) {
		statusFigure = "�� ������";
		throw Exception("\n��� ������� ������ ���� ��������������\n");
	}
	if (a != b || b != c) {
		statusFigure = "�� ������";
		throw Exception("\n������� ������ ���� ����� ����� �����\n");
	}
	if (A != 60 || B != 60 || C != 60) {
		statusFigure = "�� ������";
		throw Exception("\n��� ���� ������ ���� 60 ��������\n");
	}
	statusFigure = "������";
}

void EquilateralTriangle::printInfo() {
	cout << format(" ( ������� {}, {}, {}; ���� {}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
}
