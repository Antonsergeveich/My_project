//Leap year (високоснный год)
#include<iostream>
using namespace std;

//Високосный если:
//1)Делится на 4 без остатка
//2)Делится на 4 на 100 на 400 без остатка
//Не високосный если: делится на 4 и на 100 без отатка
//2016, 2000 - yes
//1900, 2017 - no

void main()
{
	setlocale(LC_ALL, "");
	int year;
	cout << "Введите год: "; cin >> year;
	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
	{
		cout << year << "\tгод високосный" << endl;
	}
	else if (year % 4 == 0 && year % 100 == 0)
	{
		cout << year << "\tгод не високосный" << endl;
	}
	else if (year % 4 == 0)
	{
		cout << year << "\tгод високосный" << endl;
	}
	else
	{
		cout << year << "\tгод не високосный" << endl;
	}
}