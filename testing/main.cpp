#include<iostream>
using namespace std;

int b = 1;

void Test(int a, int b) {
	cout << a + ::b;

}

int main() {
	int b = 11;
	Test(10, b);
	return 0;
}