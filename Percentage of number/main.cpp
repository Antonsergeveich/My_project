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
	double a;//�����
	double b;//�������
	double c;//������� �� �����
	cout << "������� �����: "; cin >> a;
	cout << "������� ����� ������� ����� ����� �� �����: ";
	cin >> b;
	double one_percent = a / 100;
	cout << "���� �������: " << one_percent << endl;
	double ten_percent = a / 10;
	cout << "������ ���������: " << ten_percent << endl;
	c = one_percent * b;
	cout << "������� �� �����: " << c;
#endif // percentage_of_namber;
#ifdef number_of_digits
	int a, b, c = 0;
	cout << "������� ����� 'a': "; cin >> a;
	while (a != 0)
	{
		b = a % 10;
		c = c + b;
		cout << b << "\t";
		a = a / 10;
	}
	cout << endl;
	cout << "����� ���� ����� = " << c << endl;
#endif // number_of_digits

}