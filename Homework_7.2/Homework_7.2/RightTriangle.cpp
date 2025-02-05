#include <format>

#include "RightTriangle.h"
#include "Exception.h"


RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
	nameFigure = "������������� �����������";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0) {
		statusFigure = "�� ������";
		throw Exception("\n��� ������� ������ ���� ��������������\n");
	}
	if (C != 90) {
		statusFigure = "�� ������";
		throw Exception("\n���� � �� ����� 90\n");
	}
	statusFigure = "������";
}

void RightTriangle::printInfo() {
	cout << format(" (�������{}, {}, {}; ����{}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
}
