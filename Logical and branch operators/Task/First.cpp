#include <iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	char symbol;
	cout << "Введите символ = ";
	cin >> symbol;
	if ((symbol >= 33) && (symbol <= 47)) cout << "Это знак препинания\n";
	else {
		if ((symbol >= 48) && (symbol <= 57)) cout << "Это число\n";
		else {
			if ((symbol >= 65) && (symbol <= 90) || (symbol >= 97) && (symbol <= 122)) cout << "Это письмо\n";
			else cout << "Другое\n";
		}
	}
}