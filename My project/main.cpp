#include<iostream>
using namespace std;
using std::cout;
//#define number_to_the_power
//#define pointers
void main()
{
	setlocale(LC_ALL, "");
#ifdef number_to_the_power

	double a; //��������� �������
	int n; //���������� �������
	double N = 1; //�������
	cout << "������� ��������� �������: "; cin >> a;
    cout << "������� ���������� �������: "; cin >> n;
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
	//Task1:
	//int i = 0;
	//i = ++i + ++i;//1+1+2=4
	//cout << i << endl;

	//Task2:
	//int i = 0;
	//i = i++ + ++i;//1+1+1=3
	//cout << i << endl;

	//int i = 0;
	//i = i++ + 1 + (++i *= 2); //� ������ i � ��������� (++i*=2) = (i+1)+(i+1)=2; � ��������� (++i*=2)=1*2=2;
	//cout << i << endl;

	//Task3:
	//int i = 0;
	//i = i++ + 1 + ++i * 2;// � ��������� ++i * 2 ��� �������� i � ������ ����� 1: 2+1+1+1=5;
	//cout << i << endl;

	//Task5:
	//int i = 0;
	//i += i++ + 1 + (++i *= 2);//2+1+2+2+1=8;
	//cout << i << endl;

	//Task6:
	//int i = 0;
	//i *= i++ + 1 + (++i += 2);// 22
	//
	//cout << i << endl;

	int a = 3;
	cout << a % 17 << endl;//3
	cout << a / 17 << endl;//0
}