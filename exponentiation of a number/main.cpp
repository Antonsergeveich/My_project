#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a; //Основание степени
	int n; //показатель степени
	double N = 1; //степень
	int x = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	    cout << a << " ^ " << x << " = " << N << endl;
		x++;
	}
}