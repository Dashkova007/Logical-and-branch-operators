#include <iostream>
using namespace std;
void third() {
	setlocale(LC_ALL, "RUS");
	float FirstSales, SecondSales, ThirdSales;
	cout << "������� ������� ������: ";
	cin >> FirstSales >> SecondSales >> ThirdSales;
	if (FirstSales < 500) FirstSales = 0.03 * FirstSales + 200;
	else {
		if (FirstSales >= 500 && FirstSales < 1000) FirstSales = 0.05 * FirstSales + 200;
		else if (FirstSales >= 1000) FirstSales = 0.08 * FirstSales + 200;
	}
	if (SecondSales < 500) SecondSales = 0.03 * SecondSales + 200;
	else {
		if (SecondSales >= 500 && SecondSales < 1000) SecondSales = 0.05 * SecondSales + 200;
		else if (SecondSales >= 1000) SecondSales = 0.08 * SecondSales + 200;
	}
	if (ThirdSales < 500) ThirdSales = 0.03 * ThirdSales + 200;
	else {
		if (ThirdSales >= 500 && ThirdSales < 1000)  ThirdSales = 0.05 * ThirdSales + 200;
		else if (ThirdSales >= 1000) ThirdSales = 0.08 * ThirdSales + 200;
	}
	if (FirstSales > SecondSales&& FirstSales > ThirdSales) FirstSales += 200;
	else {
		if (SecondSales > ThirdSales) SecondSales += 200;
		else ThirdSales += 200;
	}
	printf("�������� 1 ���������: %.2f ��������\n", FirstSales);
	printf("�������� 2 ���������: %.2f ��������\n", SecondSales);
	printf("�������� 3 ���������: %.2f ��������\n", ThirdSales);
}