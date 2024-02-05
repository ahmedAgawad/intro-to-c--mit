#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void doubleNumber(int &num) {
	num = num * 2;
}

int main()
{
	int num = 35;
	doubleNumber(num);
	cout << num;
	return 0;
}