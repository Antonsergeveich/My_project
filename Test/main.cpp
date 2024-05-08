#include <iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value{};//�������� ��������
	int index{};//������ ������������ ��������
	int* buffer = new int[n + 1];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	Print(arr, n);
	delete[] arr;
	buffer[index] = value;
	n++;
	delete[] buffer;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//��������� � ��������� ������� ����� ���������� ����������
		//� �������� ��������������
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//��������� � ��������� ������� ����� 
		//�������� �������������� - []
		cout << arr[i] << tab;
	}
	cout << endl;
}