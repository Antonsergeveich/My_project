//ASCII (American Standard Code for Information Interchange)
//Американский стандартный код для обмена информацией
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	for (int i = 0; i <= 255; i++)
	{
		cout << "code = " << i << "\t" << "char = " << (char)i << endl;
	}
}