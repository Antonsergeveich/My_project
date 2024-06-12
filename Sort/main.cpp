#include<iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 50);
void Print(const int arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void quick_sort(int* arr, int first, int last);
void selection_sort(int arr[], int size);
void selection_Sort(int arr[], const int n);
void selection_Sort2(int arr[ROWS][COLS], const int ROWS, const int COLS);


void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 10,2,84,7,-11,23,99,4,55,1 };
	Print(arr, 10);
	cout << endl;
	/*quick_sort(arr, 0, SIZE-1);
	Print(arr, 10);
	selection_Sort(arr, 10);
	Print(arr, 10);*/
	int arr_2[ROWS][COLS];
	FillRand(arr_2, 4, 5);
	selection_Sort2(arr_2,4,5);
	Print(arr_2,4,5);

}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void quick_sort(int* arr, int first, int last) //������� ����������
//Quick_sort:
//1.�������� ������� � �������� �������, ��� �������� (���� ������� ��� ������������),
//  � ���� ��������� ���������� ��������� �������� �������;
//2.��������� � ���� ������: � ������ ������� (���� �������� ������� ������ ��� �������),
// � ����� ������� (���� �������� ������� ������ ��� �������);
//3.��� ������ ����� ������� � ������ � � ����� - ������ �� �������; ����� ������� ��������� � ������ ������� � ������ ����� ������;
// ��� ������ ���������� ������, �������� ��������� � ����� ����� ����� ������ �������� ��������� � ������ �����;
//4.������ �������� ���� �������, � ������ ������� ����� ����� ������� � �������� ����������, �� ������ ������ � �������� ����������;  
// ��� ����� ����������� ���� � ������� �� ����� ������������ �� ������ �������� ������ �������.
//5.��� ������ ����� ��������� ��� ����� �������� ��� ������ ������������ (����� �������� ������� ������������ ���);

//*arr - ��������� �� ������ �� ������ ������� �� ����� �������������;
//first - ������ ������� �������� �������;
//last - ������ ���������� �������� �������;
{
	if (first < last) //�������� ������� ������������ ���������� ��������
	{
		int left = first;
		int right = last;
		int middle = arr[(left + right) / 2]; //������� ������� ������������ ������� (���������������);
		do
		{
			while (arr[left] < middle)left++; // ����� ������ ����������� ���� ����� ������� ������ ��������, ���� ����� ������ - ����;
			while (arr[right] > middle)right--;// ������ ������ ��������� ���� ������ ������� ������ ��������, ���� ������ - ����;
			if (left <= right) // ��������� ���� ����� ������� ������ ��� ����� ������� �� ������ �� �������
			{
				int buffer = arr[left];
				arr[left] = arr[right];
				arr[right] = buffer;
				left++;
				right--;
			}
		} while (left < right); // ���� ������� �� ��������� ���������� ��� ��� 
		quick_sort(arr, first, right); //�������� �����
		quick_sort(arr, left, last);   //�������� ������
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

//Selection Sort: 
//1.�������� ������� ������� ������� � ���������� ��� �� �����;
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
void selection_Sort2(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//��� ��� ����� �������� �������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//��� ��� ����� ���������� ���������� �������� � ������ ������������ ��������
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					/*if (k == i && l == 0)l = j + 1;
					if (l == COLS)break;*/
					//arr[i][j] - ��������� �������
					//arr[k][l] - ������������ �������

					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}