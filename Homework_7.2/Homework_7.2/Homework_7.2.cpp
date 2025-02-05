#include "Header.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	try {
		RightTriangle rt(3, 4, 6, 30, 60, 90);
		printInfo(&rt);
		cout << "Прямоугольный треугольник создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	try {
		IsoscelesTriangle it(5, 6, 5, 50, 60, 70);
		printInfo(&it);
		cout << "Равнобедренный треугольник создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	try {
		EquilateralTriangle et(7, 7, 7, 60, 60, 60);
		printInfo(&et);
		cout << "Равносторонний треугольник создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	try {
		Rectangle rect(4, 6, 5, 6, 90, 90, 90, 90);
		printInfo(&rect);
		cout << "Прямоугольник создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	try {
		Square sq(5, 5, 5, 5, 90, 90, 90, 89);
		printInfo(&sq);
		cout << "Квадрат создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	try {
		Parallelogram par(4, 5, 4, 5, 60, 120, 60, 120);
		printInfo(&par);
		cout << "Параллелограм создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	try {
		Rhombus rh(6, 6, 6, 6, 60, 120, 60, 121);
		printInfo(&rh);
		cout << "Ромб создан успешно.\n\n";
	}
	catch (const Exception& e) {
		cerr << "\nОшибка создания фигуры. Причина: " << e.what() << endl;
	}

	return 0;
}
