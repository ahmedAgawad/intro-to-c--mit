#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void f(const int a = 5) {
	cout << a * 2 << endl;
}

int a = 123;

int main()
{
	/*
	2
	246
	6
	8
	10 */
	f(1);
	f(a);
	int b = 3;
	f(b);
	int a = 4;
	f(a);
	f();

	return 0;
}