#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

void Hanoi(int n, int start, int finish);

//Numbers start and finish are from 1 to 3;
//Start != finish;
//Numbers of disks n > 0;

void main()
{
	setlocale(LC_ALL, "");
	Hanoi(5, 1, 2);
}

void Hanoi(int n, int start, int finish)
{
	if (n == 1)
	{
		cout << " move disk " << n << " from ";
		cout << start << " to " << finish << endl;
	}
	else
	{
		int buffer = 6 - start - finish;
		Hanoi(n - 1, start, buffer);
		cout << " move disk " << n << " from ";
		cout << start << " to " << finish << endl;
		Hanoi(n - 1, buffer, finish);
	}
}