#include <format>

#include "Triangle.h"
#include "Exception.h"

Triangle::Triangle(double aS, double bS, double cS, double AA, double BA, double CA) : a{ aS }, b{ bS }, c{ cS }, A{ AA }, B{ BA }, C{ CA } {
}

void Triangle::printInfo() {
	cout << format(" ( стороны {}, {}, {}; углы {}, {}, {}) {}\n", a, b, c, A, B, C, statusFigure);
};