#include<iostream>
using namespace std;

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
}