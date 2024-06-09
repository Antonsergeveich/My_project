#include<iostream>
using namespace std;

void Print(const int arr[], const int n);
void quick_sort(int* arr, int first, int last);

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 10,2,84,7,11,23,99,4,55,1 };
	Print(arr, 10);
	cout << endl;
	quick_sort(arr, 0, SIZE - 1);
	Print(arr, 10);
}

void quick_sort(int* arr, int first, int last)
{
	if (first < last)
	{
		int left = first;
		int right = last;
		int middle = arr[(left + right) / 2];
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
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}