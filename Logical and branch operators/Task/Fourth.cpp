#include <iostream>
using namespace std;
void fourth() {
	setlocale(LC_ALL, "RUS");
	int value, delays;
	float salary, lines, DesiredSalary;
	cout << "1. ���� ���������, ������� ����� ���� ���� ���� ��������\n";
	cout << "2. ���� ���������, ������� ��� ���� ����� ��������.\n";
	cout << "3. ���� ����������, ������� ����� �������� ���� � �������� ��.\n";
	cout << "��� ����� = ";
	cin >> value;
	switch (value) {
	case 1:
		cout << "������� ����� = ";
		cin >> salary;
		cout << "������� ���������� ��������� = ";
		cin >> delays;
		lines = ((salary + ((delays / 3) * 20)) * 100) / 50.0;
		cout << "���� ����� �������� " << lines << " �����";
		break;
	case 2:
		cout << "������� ����� = ";
		cin >> salary;
		cout << "������� ���������� ����� ���� = ";
		cin >> lines;
		DesiredSalary = (lines / 100) * 50;
		if (salary > DesiredSalary) cout << "������������ ����� ���� ��� �������� ��������\n";
		else {
			delays = (DesiredSalary - salary) / 20 * 3 + 2;
			cout << "���� ����� �������� �� ������ �������� " << delays << " ���\n";
		}
		break;
	case 3:
		cout << "������� ���������� ����� ���� = ";
		cin >> lines;
		cout << "������� ���������� ��������� = ";
		cin >> delays;
		DesiredSalary = (lines / 100) * 50;
		salary = DesiredSalary - ((delays / 3) * 20);
		if (salary <= 0) cout << "������������ ����� ���� ��� ��� ���� ����� ��������� ��������\n";
		else printf("���� ��������� = %.2f$", salary);
		break;
	default: cout << "Error\n"; break;
	}
	cout << endl;
}