#include <iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	int Number, FirstNumber, SecondNumber, ThirdNumber;
	cout << "Введите число = ";
	cin >> Number;
	FirstNumber = Number / 100;
	SecondNumber = (Number - FirstNumber * 100) / 10;
	ThirdNumber = Number - FirstNumber * 100 - SecondNumber * 10;
	cout << "На ветке сидело ";
	switch (SecondNumber) {
	case 1: cout << Number << " ворон"; break;
	default:
		switch (ThirdNumber) {
		case 1:		cout << Number << " ворона"; break;
		case 2: case 3: case 4:		cout << Number << " вороны"; break;
		default:	cout << Number << " ворон"; break;
		}
		break;
	}
	cout << endl;
}