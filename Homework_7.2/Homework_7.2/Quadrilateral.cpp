#include <format>

#include "Quadrilateral.h"
#include "Exception.h"


Quadrilateral::Quadrilateral(double aS, double bS, double cS, double dS, double AA, double BA, double CA, double DA) :
	a{ aS }, b{ bS }, c{ cS }, d{ dS }, A{ AA }, B{ BA }, C{ CA }, D{ DA } {
}

void Quadrilateral::printInfo() {
	cout << format(" ( стороны {}, {}, {}, {}; углы {}, {}, {}, {}) {}\n", a, b, c, d, A, B, C, D, statusFigure);
}