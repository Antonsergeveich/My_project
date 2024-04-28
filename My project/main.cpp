#include<iostream>
using namespace std;
using std::cout;
//#define number_to_the_power
//#define pointers
void main()
{
	setlocale(LC_ALL, "");
#ifdef number_to_the_power

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
#endif //  number_to_the_power
#ifdef pointers
	int a = 2;
	int* pa = &a;
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << arr+a << endl;
	cout << arr << endl;

#endif // pointers


}