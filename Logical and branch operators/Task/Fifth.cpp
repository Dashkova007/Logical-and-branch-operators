#include <iostream>
using namespace std;
void fifth() {
	setlocale(LC_ALL, "RUS");
	int DayFirst, MonthFirst, YearFirst, FirstDayResult, FirstYearResult, FirstDateResult;
	int DaySecond, MonthSecond, YearSecond, SecondDayResult, SecondYearResult, SecondDateResult, DateResult;
	cout << "Введите первую дату = ";
	cin >> DayFirst >> MonthFirst >> YearFirst;
	cout << "Введите вторую дату = ";
	cin >> DaySecond >> MonthSecond >> YearSecond;

	FirstYearResult = (YearFirst - 1) * 365 + round((YearFirst - 1) / 4.0 - (YearFirst - 1) / 100.0 + (YearFirst - 1) / 400.0);
	FirstDayResult = 0;
	switch (MonthFirst - 1) {
	case 12:	FirstDayResult += 31;
	case 11:	FirstDayResult += 30;
	case 10:	FirstDayResult += 31;
	case 9: 	FirstDayResult += 30;
	case 8: 	FirstDayResult += 31;
	case 7: 	FirstDayResult += 31;
	case 6: 	FirstDayResult += 30;
	case 5: 	FirstDayResult += 31;
	case 4: 	FirstDayResult += 30;
	case 3: 	FirstDayResult += 31;
	case 2:		FirstDayResult += 28 + ((YearFirst % 4 == 0) && (YearFirst % 100 != 0) || (YearFirst % 400 == 0));
	case 1:		FirstDayResult += 31;
	default:	break;
	}
	FirstDateResult = FirstYearResult + FirstDayResult + DayFirst;

	SecondYearResult = (YearSecond - 1) * 365 + round((YearSecond - 1) / 4.0 - (YearSecond - 1) / 100.0 + (YearSecond - 1) / 400.0);
	SecondDayResult = 0;
	switch (MonthSecond - 1) {
	case 12:	SecondDayResult += 31;
	case 11:	SecondDayResult += 30;
	case 10:	SecondDayResult += 31;
	case 9: 	SecondDayResult += 30;
	case 8: 	SecondDayResult += 31;
	case 7: 	SecondDayResult += 31;
	case 6: 	SecondDayResult += 30;
	case 5: 	SecondDayResult += 31;
	case 4: 	SecondDayResult += 30;
	case 3: 	SecondDayResult += 31;
	case 2:		SecondDayResult += 28 + ((YearSecond % 4 == 0) && (YearSecond % 100 != 0) || (YearSecond % 400 == 0));
	case 1:		SecondDayResult += 31;
	default:	break;
	}
	SecondDateResult = SecondYearResult + SecondDayResult + DaySecond;

	DateResult = abs(SecondDateResult - FirstDateResult);
	cout << "Количество дней = " << DateResult << endl;
}