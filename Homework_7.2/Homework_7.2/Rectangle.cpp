#include <format>

#include "Rectangle.h"
#include "Exception.h"


Rectangle::Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
	nameFigure = "�������������";
	cout << nameFigure;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		statusFigure = "�� ������";
		throw Exception("\n������� ������ ���� ��������������\n");
	}
	if (a != c || b != d) {
		statusFigure = "�� ������";
		throw Exception("\n������� ������ ���� ������� ����� ���� �����\n");
	}
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		statusFigure = "�� ������";
		throw Exception("\n��� ���� ������ ���� 90 ��������\n");
	}
	statusFigure = "������";
}

void Rectangle::printInfo() {
	cout << format(" ( ������� {}, {}, {}, {}; ���� {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}
