#include<iostream>
using namespace std;
using std::cout;

int** Allocate(const int rows, const int cols);
void Clear(int** arr, const int rows);
void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);
void FillRand(int arr[], const int n);
void FillRand(int** arr, const int rows, const int cols);

#define tab "\t"

//#define number_to_the_power
//#define pointers
//#define INCREMENT
//#define SIZEOF_TYPEID
//#define DYNAMIC_MEMORY1
#define DYNAMIC_MEMORY2
void main()
{
	setlocale(LC_ALL, "");
#ifdef number_to_the_power

	double a; //Основание степени
	int n; //показатель степени
	double N = 1; //степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
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
	//int a = 3; int b = 1024;
	//cout << a % 10 << endl;//3
	//cout << a / 10 << endl;//0
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
	cout << arr + a << endl;
	cout << arr << endl;

#endif // pointers
#ifdef INCREMENT
	Task1 :
	int i = 0;
	i = ++i + ++i;//1+1+2=4
	cout << i << endl;

Task2:
	int i = 0;
	i = i++ + ++i;//1+1+1=3
	cout << i << endl;

	int i = 0;
	i = i++ + 1 + (++i *= 2); //в памяти i в выражении (++i*=2) = (i+1)+(i+1)=2; В выражении (++i*=2)=1*2=2;
	cout << i << endl;

Task3:
	int i = 0;
	i = i++ + 1 + ++i * 2;// в выражении ++i * 2 без скобочек i в памяти равно 1: 2+1+1+1=5;
	cout << i << endl;

Task5:
	int i = 0;
	i += i++ + 1 + (++i *= 2);//2+1+2+2+1=8;
	cout << i << endl;

Task6:
	int i = 0;
	i *= i++ + 1 + (++i += 2);// 22

	cout << i << endl;
#endif // INCREMENT
#ifdef SIZEOF_TYPEID
	int* arr = new int[5];
	cout << "sizeof(new int[5]) = " << sizeof(new int[0]) << endl;
	cout << "typeid(new int[5]).name() = " << typeid(new int[0]).name() << endl;
	//Оператор new в языке программирования C++ возвращает адрес выделенного участка памяти. указатель "int *"
	//sizeof(new int[5]) = 4 (если x86 архитектура, 8 - если X84 архитектура)
	//typeid(new int[5]).name() = int*
	delete[] arr;
#endif // SIZEOF_TYPEID
#ifdef DYNAMIC_MEMORY1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n]; //выделение памяти для одномерного массива;

	FillRand(arr, n); //заполнение массива рандомными целыми числами
	Print(arr, n); //вывод массива;

	delete[] arr; //удаление одномерного массива;

	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arer = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[n] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;
	int* arr = new int[n];
	delete[] arr;

#endif // DYNAMIC_MEMORY1
#ifdef DYNAMIC_MEMORY2
	int rows;
	int cols;
	int index;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	int** arr = Allocate(rows, cols);
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);

	Clear(arr, rows);
#endif // DYNAMIC_MEMORY2
}
int** Allocate(const int rows, const int cols)
{
	//1) Создаём массив указателей :
	int** arr = new int* [rows];

	//2) Выделяем память под строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows,const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int [cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}

void Clear(int** arr, const int rows)
{
	//3)Сначала удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//4)Удаляем массив указателей:
	delete[] arr;
}
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void FillRand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через арифметику указателей
		//и оператор разъименования
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//обращение к элементам массива через 
		//оператор индексирования - []
		cout << arr[i] << tab;
	}
	cout << endl;
}
int* push_back(int* arr, int& n, const int value)
{
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];

	//2) Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) Удаляем исходный массив:
	delete[] arr;	//0x00622778

	//4) Подменяем адрес старого массива адресом нового массива:
	arr = buffer;

	//5) Только после всего этого в конце массива появляется элемент,
	//	 в который можно сохранить добавляемое значение:
	arr[n] = value;

	//6) После того как в массив добавился элемент, количество его элементов
	//	 увеличилось на 1:
	n++;

	//buffer = nullptr;	//указатель на 0
	return buffer;
}