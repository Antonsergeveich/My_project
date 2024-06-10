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
void quick_sort(int* arr, int first, int last) //Быстрая сортировка
//*arr - указатель на массив на массив который мы хотим отсортировать;
//first - индекс первого элемента той части массива которую мы хотим отсортировать;
//last - индекс последнего элемента той части массива которую мы хотим отсортировать;
{
	if (first < last) 
	{
		int left = first;
		int right = last;
		int middle = arr[(left + right) / 2]; //средний элемент сортируемого массива;
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
void selection_sort(int arr[], int size) //Сортировка выбором (не эффективный)
{
	int index; //индекс перебираемого элемента
	int less; //индекс минимального элемента в перебираемом массиве
	for (index = 0; index < size; index++)
	{
		less = index; //устанавливаем минимальный элемент по index
		for (int i = index + 1; i < size; i++)
		{
			if (arr[i] < arr[index])less = i; // Если текущий элемент 'i' меньше минимального 'less' то минимальный равен текущему
		}
		if (less == index)continue; //Если минимамальный элемент равен нулевому в массиве, то переходим на следующий сравниваемый элемент
		else //Если не равен то меняем местами минимальный с нулевым
		{
			int buffer = arr[less];
			arr[less] = arr[index];
			arr[index] = buffer;
		}
	}
}

//Selection Sort: 1.Выбираем нулевой элемент массива и сравниваем его со всеми;
//2.Если текущий меньше минимального то меняем их местами;
//3.Переходим к следующему элементу массива, отсортированный остаётся слева;
//4.C каждой итерацией массив неотсортированных элементов уменьшается;

void selection_Sort(int arr[], const int n) //Сортировка выбором (Эффективный)
{
	for (int i = 0; i < n; i++) // счётчик i выбирает элемент массива в который будет помещено минимальное значение
	{
		for (int j = i + 1; j < n; j++) // счётчик j перебирает оставшиеся элементы массива
		{
			//arr[i] выбранный элемент массива
			//arr[j] перебираемый элемент массива
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}