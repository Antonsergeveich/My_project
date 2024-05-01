#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

#define tab "\t" 

//#define BASIC
//#define BASIC_1
//#define POINTERS_AND_ARRAYS
//#define POINTERS_AND_ARRAYS_1
//#define POINTERS_AND_ARRAYS_2
//#define POINTERS_AND_ARRAYS_3
//#define POINTERS_AND_ARRAYS_4
//#define POINTERS_AND_FUNCTIONS
//#define POINTERS_AND_FUNCTIONS_1
#define INITIALIZATION
void ShowArray(int arr[], int size);
int GetAmound(int* ptr, int size);
int GetAmound_1(int* ptr, int size);
void Swap(int* a, int* b);

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASIC
	int x = 3, y = 5;
	double d;
	int* px = &x;//��������� 'px' ���� ����� ���������� 'x';
	int* py = &y;//��������� 'py' ���� ����� ���������� 'y';
	cout << "*px = &x = " << *px << endl;
	cout << "*py = &y = " << *py << endl;
	y = *px + 1;//����������� 'y' �������� �� 1 ������ �������� 'x';
	//'*' ��������������� ��������� 'px' � ������� �������� ���������� 'x';
	cout << "y = *px + 1 = " << y << endl;
	cout << "*px = " << *px << endl; //������� ������� �������� 'x';
	d = sqrt((double)*px);//�������� � 'd' ���������� ������ �� 'x';
	//������ �� �������� ������� 'sqrt' �������� 'x' ������������� ���� double
	cout << "d = sqrt((double)*px) = " << d << endl;
	*px += 1;// = *px + 1;
	cout << "*px = *px + 1 = " << *px << endl;
	py = px; cout << "py = px = " << *py << endl;
#endif // BASIC

#ifdef BASIC_1
	int x = 10;
	int y = 5;
	int* px = nullptr;
	int* py = nullptr;
	px = &x;//���������� ����� ���������� x � px;
	cout << px << " " << &x << endl; //���������� ����� x ����� ��������� � �������� ������ ������;
	cout << *px << " " << x << endl; //���������� �������� x ����� ���������� � �������� �������������;
	*px = 99;//�������� �������� ���������� x ��������� �������� ��������������;
	cout << *px << " " << x << endl;//���������� ����� �������� x ����� ��������� � �������� ��������������;
	py = &y; // ���������� ����� ���������� y � py;
	cout << py << " " << &y << endl;//���������� ����� y ����� ��������� � �������� ������ ������;
	cout << *py << " " << y << endl;//���������� �������� y ����� ���������� � �������� ��������������;
	py = px; //���������� �������� ������ �� px � py//������ ��� ��������� ��������� �� x;
	cout << *px << " " << *py << " " << x << endl;//���������� �������� x ����� ���������� � ��� ���������;
#endif // BASIC_1

#ifdef POINTERS_AND_ARRAYS
	const int N = 10;
	int a[N] = {0,1,1,2,3,5,8,13,21,34};
	int* pa;
	pa = &a[0];// ���� � �� �� ��� � "pa = a", ��� ��� ��� ������� ��� ��������� �� ��� ������� �������;
	pa = a;//&a[i] == a+i ���� � ����;
	cout << "*pa = " << *pa << endl;
	int x = *pa;//�������� ���������� a[0] � x;
	cout << "x = *pa = " << x << " " << sizeof(x) << endl;
	x = *(pa + 1);
	cout << "x = *(pa + 1) = " << x << " " << &x << " " << sizeof(x) << endl;//������� �������� ���������� �������� ������� �.�. a[1];
	x = *(a + 8);//������ �� ����� ������� ������� a[i] ����� �������� ��� *(a+i), ��� 'a' ��� �������;
	cout << "x = *(a + 8) = a[8] = " << x << endl;//������� �������� ���������� �������� ������� �.�. a[8];
	//��������� "pa" �������� ����������, ��� ������� �������� ����������;
#endif // POINTERS_AND_ARRAYS

#ifdef POINTERS_AND_ARRAYS_1
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };
	int* ptr = &arr[0];//���������� ����� �������� �������� ������� � ���������;
	cout << *ptr << endl;//���������� �������� �������� ������� ����� ���������������� ���������;
	//cout << *(ptr + 1) << endl;//��������� �������� �� ���� ������� ������ ���� ����� � ���������� ����� ����� � ��������� ptr;
	//ptr = ptr + 1 * sizeof(int);
	ptr++;
	//ptr = ptr + 1;
	cout << *ptr << endl;
#endif // POINTERS_AND_ARRAYS_1

#ifdef POINTERS_AND_ARRAYS_2//������������� ��������� ��� ����������� ��������� �������;
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };
	int* ptr = arr;//���������� ����� �������� �������� ������� � ���������;
	for (int i = 0; i < size; i++)//������� ������ �� �����;
	{
		cout << *(ptr + i) << tab;
	}
	*(ptr + 1) = 55;//�������� �������� ������� ��������;
	*(ptr + 2) = 12;//�������� �������� ������� ��������;
	cout << endl;
	for (int i = 0; i < size; i++)//������� ������;
	{
		cout << *(ptr + i) << tab;
	}
#endif // POINTERS_AND_ARRAYS_2

#ifdef POINTERS_AND_ARRAYS_3//��������� � ����� ������� � ������� ���������� ����������;
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };
	for (int i = 0; i < size; i++)//������� ������ �� �����;
	{
		cout << *(arr + i) << tab;
	}
	*(arr + 1) = 55;//�������� �������� ������� ��������;
	*(arr + 2) = 12;//�������� �������� ������� ��������;
	cout << endl;
	for (int i = 0; i < size; i++)//������� ������;
	{
		cout << *(arr + i) << tab;
	}
#endif // POINTERS_AND_ARRAYS_3

#ifdef POINTERS_AND_ARRAYS_4//������������� ���������� �������� � ���������;
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };
	int* ptr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << tab;
	}
	ptr[1] = 55;
	ptr[2] = 12;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << tab;
	}
#endif //  POINTERS_AND_ARRAYS_4

#ifdef POINTERS_AND_FUNCTIONS
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };
	ShowArray(arr, size);
	cout << endl;
	cout << "Amound of array elements: " << GetAmound_1(arr, size) << endl;
	ShowArray(&arr[0], size);
#endif // POINTERS_AND_FUNCTIONS

#ifdef POINTERS_AND_FUNCTIONS_1//��������� ���������� �� ���������
int av = 5, bv = 9;
Swap(&av, &bv);
cout << av << " " << bv << endl;
#endif // POINTERS_AND_FUNCTIONS_1

#ifdef INITIALIZATION
int* ptr;//��������� �� ���������������, � �� �����;
ptr = 0;//������ ptr �������, ��� ������ ������;
cout << ptr << endl;
ptr = NULL;//�������� ����� 'C' ��� ������ �� �������������;
cout << ptr << endl;
ptr = nullptr;//����������� ������ C++ �������� �������� ���������;
cout << ptr << endl;
#endif // INITIALIZATION
}

void ShowArray(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << *(arr + i) << tab;
		}
	}
int GetAmound(int* ptr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(ptr + i);
	}
	return sum;
}
int GetAmound_1(int* ptr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++,ptr++)
	{
		sum += *ptr;
	}
	return sum;
}
void Swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}