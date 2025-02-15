#include "Error.h"
#include <iostream>
#include <locale.h>

int Error::function(std::string* str, int forbidden_length) {
	if ((*str).length() != forbidden_length) {
		std::cout << "Длина слова " << *str << " равна " << (*str).length() << std::endl;
		return 1;
	}
	else {
		throw("bad_length");
		return 0;
	}
}