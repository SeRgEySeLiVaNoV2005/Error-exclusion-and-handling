#include <iostream>
#include <locale.h>

#include "Error.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int forbiddenLength;
	string word;
	Error error;
	cout << "Введите запретную длину: ";
	cin >> forbiddenLength;
	while (1) {
		cout << "Введите слово: ";
		cin >> word;
		try {
			error.function(&word, forbiddenLength);
		}
		catch(std::exception){
			/*cout << "Вы ввели слово запретной длины! До свидания" << endl;*/
			std::runtime_error("Вы ввели слово запретной длины! До свидания");
			break;
		}
	}
}
