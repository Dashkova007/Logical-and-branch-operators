#include <iostream>
#include <windows.h>
enum CC { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White }color;
using namespace std;
void sixth() {
	setlocale(LC_ALL, "RUS");
	int n, col;
	cout << "Black Ц 0\nBlue Ц 1\nGreen Ц 2\nCyan Ц 3\nRed Ц 4\nMagenta Ц 5\nBrown Ц 6\nLightGray Ц 7\nDarkGray Ц 8\nLightBlue Ц 9\nLightGreen Ц 10\n";
	cout << "LightCyan Ц 11\nLightRed Ц 12\nLightMagenta Ц 13\nYellow Ц 14\nWhite Ц 15\n";
	cout << "1 Ц »зменение цвета фона\n";
	cout << "2 - »зменение цвета текста\n";
	cout << "¬ыберите вариант = ";
	cin >> n;
	cout << "¬ведите номер цвета = ";
	cin >> col;
	color = (CC)col;
	if (n == 1) {
		switch (color) {
		case Black: 			 	system("color 0F");	break;
		case Blue: 				 	system("color 1F");	break;
		case Green: 			 	system("color 2F");	break;
		case Cyan:				 	system("color 3F");	break;
		case Red: 					system("color 4F");	break;
		case Magenta: 			system("color 5F");	break;
		case Brown: 				system("color 6F");	break;
		case LightGray:			system("color 7F");	break;
		case DarkGray: 			system("color 8F");	break;
		case LightBlue: 		system("color 9F");	break;
		case LightGreen: 		system("color AF");	break;
		case LightCyan: 		system("color BF");	break;
		case LightRed:			system("color CF");	break;
		case LightMagenta:	system("color DF");	break;
		case Yellow: 		 		system("color EF");	break;
		case White: 			 	system("color FF");	break;
		default: 	break;
		}
	}
	else {
		switch (color) {
		case Black: 			 	system("color 00");	break;
		case Blue: 			 		system("color 01");	break;
		case Green: 		 		system("color 02");	break;
		case Cyan: 			 		system("color 03");	break;
		case Red: 				 	system("color 04");	break;
		case Magenta: 			system("color 05");	break;
		case Brown: 			 	system("color 06");	break;
		case LightGray:			system("color 07");	break;
		case DarkGray: 			system("color 08");	break;
		case LightBlue: 		system("color 09");	break;
		case LightGreen: 		system("color 0A");	break;
		case LightCyan: 		system("color 0B");	break;
		case LightRed:			system("color 0C");	break;
		case LightMagenta: 	system("color 0D");	break;
		case Yellow: 			 	system("color 0E");	break;
		case White: 			 	system("color 0F");	break;
		default: 	break;
		}
	}
	cout << endl;
}