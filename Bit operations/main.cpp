#include<iostream>
using namespace std;

void main()
{
unsigned int x = 4;
cout << "x = " << x << endl;
x = x >> 1;//��������� ����� ������ �� 1 ��� ����� ����� �� 2;
cout <<"x >> 1 = "<< x << endl;//���������� 4/2=2;
x = x << 1;//��������� ����� ����� �� 1 ��� �������� ����� �� 2;
cout <<"x << 1 = "<< x << endl;//���������� 4/2=2;
x = x << 2;//�������� ����� �� 4;
cout << "x << 2 = " << x << endl;
}