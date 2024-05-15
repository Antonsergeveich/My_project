#include<iostream>
using namespace std;

//#define BITWISE_COMPARISON_2
//#define BITWISE_COMPARISON_3
//#define SHIFT

void main()
{
unsigned int x = 4;
cout << "x = " << x << endl;
x = x >> 1;//побитовый сдвиг вправо на 1 бит делит число на 2;
cout <<"x >> 1 = "<< x << endl;//получается 4/2=2;
x = x << 1;//побитовый сдвиг влево на 1 бит умножает число на 2;
cout <<"x << 1 = "<< x << endl;//получается 4/2=2;
x = x << 2;//умножает число на 4;
cout << "x << 2 = " << x << endl;

#ifdef BITWISE_COMPARISON_2
int a = 2;
int b = 3;
cout << a << "\t" << b << endl;
a ^= b;
b ^= a;
a ^= b;
cout << a << "\t" << b << endl;
#endif // BITWISE_COMPARISON_2

#ifdef BITWISE_COMPARISON_3
int a = 2;
int b = 3;
cout << a << "\t" << b << endl;
b ^= a ^= b ^= a;
cout << a << "\t" << b << endl;
#endif // BITWISE_COMPARISON_3

#ifdef SHIFT
int i, n, y, x = 0;
cout << "Введите значение: ";  cin >> i; cout << endl;
cout << "На сколько сдвинуть битов: "; cin >> n; cout << endl;
y = i >> n; cout << "Вправо: " << y << endl; // побитовый сдвиг вправо на 1 бит это деление числа на 2
x = i << n; cout << "Влево: " << x << endl; // побитовый сдвиг влево на 1 бит это умножение числа на 2
// побитовые операции применимы только к целочисленным типам данных, к вещественным они НЕ применимы  
#endif // SHIFT

}