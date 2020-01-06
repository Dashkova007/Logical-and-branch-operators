#include <iostream>
using namespace std;
void fourth() {
	setlocale(LC_ALL, "RUS");
	int value, delays;
	float salary, lines, DesiredSalary;
	cout << "1. Надо посчитать, сколько строк кода Васе надо написать\n";
	cout << "2. Надо посчитать, сколько раз Вася может опоздать.\n";
	cout << "3. Надо определить, сколько денег заплатят Васе и заплатят ли.\n";
	cout << "Ваш выбор = ";
	cin >> value;
	switch (value) {
	case 1:
		cout << "Введите доход = ";
		cin >> salary;
		cout << "Введите количество опозданий = ";
		cin >> delays;
		lines = ((salary + ((delays / 3) * 20)) * 100) / 50.0;
		cout << "Васе нужно написать " << lines << " строк";
		break;
	case 2:
		cout << "Введите доход = ";
		cin >> salary;
		cout << "Введите количество строк кода = ";
		cin >> lines;
		DesiredSalary = (lines / 100) * 50;
		if (salary > DesiredSalary) cout << "Недостаточно строк кода для желаемой зарплаты\n";
		else {
			delays = (DesiredSalary - salary) / 20 * 3 + 2;
			cout << "Васе можна опаздать на работу максимум " << delays << " раз\n";
		}
		break;
	case 3:
		cout << "Введите количество строк кода = ";
		cin >> lines;
		cout << "Введите количество опозданий = ";
		cin >> delays;
		DesiredSalary = (lines / 100) * 50;
		salary = DesiredSalary - ((delays / 3) * 20);
		if (salary <= 0) cout << "Недостаточно строк кода для для того чтобы выплатить зарплату\n";
		else printf("Вася заработал = %.2f$", salary);
		break;
	default: cout << "Error\n"; break;
	}
	cout << endl;
}