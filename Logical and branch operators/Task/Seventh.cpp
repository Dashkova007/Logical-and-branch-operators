#include <iostream>
using namespace std;
void seventh() {
	setlocale(LC_ALL, "RUS");
	int Number, FirstNumber, SecondNumber, DecimalNumber, ThirdNumber;
	cout << "������� ����� = ";
	cin >> Number;
	FirstNumber = Number / 100;
	SecondNumber = (Number % 100) / 10;
	DecimalNumber = Number % 100;
	ThirdNumber = Number % 10;
	switch (FirstNumber) {
	case 1: 	cout << "��� ";				break;
	case 2: 	cout << "������ ";		break;
	case 3: 	cout << "������ ";		break;
	case 4: 	cout << "��������� ";	break;
	case 5: 	cout << "������� ";		break;
	case 6: 	cout << "�������� ";	break;
	case 7: 	cout << "������� ";		break;
	case 8: 	cout << "��������� ";	break;
	case 9: 	cout << "��������� "; break;
	default: 	cout << "";						break;
	}
	switch (SecondNumber) {
	case 1:
		switch (DecimalNumber) {
		case 10:	cout << "������";				break;
		case 11:	cout << "�����������";	break;
		case 12:	cout << "���������� ";	break;
		case 13:	cout << "���������� ";	break;
		case 14:	cout << "������������ "; break;
		case 15:	cout << "���������� ";	break;
		case 16:	cout << "����������� ";	break;
		case 17:	cout << "���������� ";	break;
		case 18:	cout << "������������ "; break;
		case 19:	cout << "������������ "; break;
		default:	cout << "";							break;
		}
		break;
	case 2:		cout << "�������� ";		break;
	case 3:		cout << "�������� ";		break;
	case 4:		cout << "����� ";				break;
	case 5:		cout << "��������� ";		break;
	case 6:		cout << "���������� ";	break;
	case 7:		cout << "��������� ";		break;
	case 8:		cout << "����������� ";	break;
	case 9:		cout << "��������� ";		break;
	default:		break;
	}
	if ((Number % 100 / 10) != 1) {
		switch (ThirdNumber) {
		case 1: 	cout << "���� "; 		break;
		case 2: 	cout << "��� "; 		break;
		case 3: 	cout << "��� "; 		break;
		case 4: 	cout << "������ "; 	break;
		case 5: 	cout << "���� "; 		break;
		case 6: 	cout << "����� "; 	break;
		case 7: 	cout << "���� "; 		break;
		case 8: 	cout << "������ "; 	break;
		case 9: 	cout << "������ "; 	break;
		}
	}
	cout << endl;
}