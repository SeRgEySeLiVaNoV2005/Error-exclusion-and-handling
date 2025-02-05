#pragma once

#include <iostream>

using namespace std;
class Shape {
public:
	virtual void printInfo() = 0;
protected:
	std::string nameFigure = "Фигура";
	std::string statusFigure = "";
	int a, b, c, d, A, B, C, D;
};

void printInfo(Shape* shape);