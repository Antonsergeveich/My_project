#include<iostream>
using namespace std;

void Print(const int arr[], const int n);
void quick_sort(int* arr, int first, int last);
void selection_sort(int arr[], int size);
void selection_Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 10,2,84,7,-11,23,99,4,55,1 };
	Print(arr, 10);
	cout << endl;
	/*quick_sort(arr, 0, SIZE-1);
	Print(arr, 10);*/
	selection_Sort(arr, 10);
	Print(arr, 10);
}

void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void quick_sort(int* arr, int first, int last) //������� ����������
//*arr - ��������� �� ������ �� ������ ������� �� ����� �������������;
//first - ������ ������� �������� ��� ����� ������� ������� �� ����� �������������;
//last - ������ ���������� �������� ��� ����� ������� ������� �� ����� �������������;
{
	if (first < last) 
	{
		int left = first;
		int right = last;
		int middle = arr[(left + right) / 2]; //������� ������� ������������ �������;
		do
		{
			while (arr[left] < middle)left++;
			while (arr[right] > middle)right--;
			if (left <= right)
			{
				int buffer = arr[left];
				arr[left] = arr[right];
				arr[right] = buffer;
				left++;
				right--;
			}
		} while (left < right);
		quick_sort(arr, first, right);
		quick_sort(arr, left, last);
	}
}
void selection_sort(int arr[], int size) //���������� ������� (�� �����������)
{
	int index; //������ ������������� ��������
	int less; //������ ������������ �������� � ������������ �������
	for (index = 0; index < size; index++)
	{
		less = index; //������������� ����������� ������� �� index
		for (int i = index + 1; i < size; i++)
		{
			if (arr[i] < arr[index])less = i; // ���� ������� ������� 'i' ������ ������������ 'less' �� ����������� ����� ��������
		}
		if (less == index)continue; //���� ������������� ������� ����� �������� � �������, �� ��������� �� ��������� ������������ �������
		else //���� �� ����� �� ������ ������� ����������� � �������
		{
			int buffer = arr[less];
			arr[less] = arr[index];
			arr[index] = buffer;
		}
	}
}

//Selection Sort: 1.�������� ������� ������� ������� � ���������� ��� �� �����;
//2.���� ������� ������ ������������ �� ������ �� �������;
//3.��������� � ���������� �������� �������, ��������������� ������� �����;
//4.C ������ ��������� ������ ����������������� ��������� �����������;

void selection_Sort(int arr[], const int n) //���������� ������� (�����������)
{
	for (int i = 0; i < n; i++) // ������� i �������� ������� ������� � ������� ����� �������� ����������� ��������
	{
		for (int j = i + 1; j < n; j++) // ������� j ���������� ���������� �������� �������
		{
			//arr[i] ��������� ������� �������
			//arr[j] ������������ ������� �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}