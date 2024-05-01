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
#define POINTERS_AND_ARRAYS_4
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

}