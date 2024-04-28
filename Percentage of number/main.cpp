#include<iostream>
using namespace std;
using std::cout;
using std::cin;

//#define number_of_digits
#define percentage_of_namber
void main()
{
	setlocale(LC_ALL, "");
#ifdef percentage_of_namber;
	double a;//число
	double b;//процент
	double c;//процент от числа
	cout << "Введите число: "; cin >> a;
	cout << "Введите какой процент нужно найти от числа: ";
	cin >> b;
	double one_percent = a / 100;
	cout << "Один процент: " << one_percent << endl;
	double ten_percent = a / 10;
	cout << "Десять процентов: " << ten_percent << endl;
	c = one_percent * b;
	cout << "Процент от числа: " << c;
#endif // percentage_of_namber;
#ifdef number_of_digits
	int a, b, c = 0;
	cout << "Введите число 'a': "; cin >> a;
	while (a != 0)
	{
		b = a % 10;
		c = c + b;
		cout << b << "\t";
		a = a / 10;
	}
	cout << endl;
	cout << "Сумма цифр числа = " << c << endl;
#endif // number_of_digits

}