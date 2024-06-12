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
void quick_sort(int* arr, int first, int last) //Быстрая сортировка
//Quick_sort:
//1.Выбираем элемент в середине массива, его значение (этот элемент уже отсортирован),
//  с этим значением сравниваем остальные элементы массива;
//2.Двигаемся с двух сторон: с начала массива (ищем элементы которые больше чем средний),
// с конца массива (ищем элементы которые меньше чем средний);
//3.Как только найдём элемент с начала и с конца - меняем их местами; Таким образом двигаемся к центру массива и делаем такие замены;
// Как только завершится проход, значения элементов в левой части будут меньше значений элементов в правой части;
//4.Дважды вызываем нашу функцию, в первую передаём левую часть массива с меньшими значениями, во вторую правую с большими элементами;  
// Так будет происходить пока в функции не будут передоваться по одному элементу нашего массива.
//5.Как только такое произойдёт это будет означать что массив отсортирован (будет проверка которая контролирует это);

//*arr - указатель на массив на массив который мы хотим отсортировать;
//first - индекс первого элемента массива;
//last - индекс последнего элемента массива;
{
	if (first < last) //проверка которая контролирует завершение рекурсии
	{
		int left = first;
		int right = last;
		int middle = arr[(left + right) / 2]; //средний элемент сортируемого массива (отсортированный);
		do
		{
			while (arr[left] < middle)left++; // левый индекс увеличиваем пока левый элемент меньше среднего, если левый больше - стоп;
			while (arr[right] > middle)right--;// правый индекс уменьшаем пока правый элемент больше среднего, если меньше - стоп;
			if (left <= right) // проверяем если левый элемент меньше или равен правому то меняем их местами
			{
				int buffer = arr[left];
				arr[left] = arr[right];
				arr[right] = buffer;
				left++;
				right--;
			}
		} while (left < right); // если индексы не совпадают проходимся ещё раз 
		quick_sort(arr, first, right); //рекурсия слева
		quick_sort(arr, left, last);   //рекурсия справа
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

//Selection Sort: 
//1.Выбираем нулевой элемент массива и сравниваем его со всеми;
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
void selection_Sort2(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Эти два цикла выбирают элемент
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//Эти два цикла перебирают оставшиеся элементы в поиске минимального значения
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					/*if (k == i && l == 0)l = j + 1;
					if (l == COLS)break;*/
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент

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