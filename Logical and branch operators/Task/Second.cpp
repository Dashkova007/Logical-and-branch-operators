#include <iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	int Number, FirstNumber, SecondNumber, ThirdNumber;
	cout << "������� ����� = ";
	cin >> Number;
	FirstNumber = Number / 100;
	SecondNumber = (Number - FirstNumber * 100) / 10;
	ThirdNumber = Number - FirstNumber * 100 - SecondNumber * 10;
	cout << "�� ����� ������ ";
	switch (SecondNumber) {
	case 1: cout << Number << " �����"; break;
	default:
		switch (ThirdNumber) {
		case 1:		cout << Number << " ������"; break;
		case 2: case 3: case 4:		cout << Number << " ������"; break;
		default:	cout << Number << " �����"; break;
		}
		break;
	}
	cout << endl;
}