#include <iostream>
#include <locale.h>
using namespace std;
int function(string* str, int forbidden_length) {
	if ((*str).length() != forbidden_length) {
		cout << "Длина слова " << *str << " равна " << (*str).length() << endl;
		return 1;
	}
	else {
		throw("bad_length");
		return 0;
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int forbiddenLength;
	string word;
	cout << "Введите запретную длину: ";
	cin >> forbiddenLength;
	while (1) {
		cout << "Введите слово: ";
		cin >> word;
		try {
			function(&word, forbiddenLength);
		}
		catch(...){
			cout << "Вы ввели слово запретной длины! До свидания" << endl;
			break;
		}
	}
}
