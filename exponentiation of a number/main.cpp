#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a; //ќснование степени
	int n; //показатель степени
	double N = 1; //степень
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
}