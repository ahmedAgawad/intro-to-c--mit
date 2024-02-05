#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
void swapNums(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int num1 = 5, num2 = 10;
	swapNums(num1, num2);
	cout << num1 << " " << num2;
	return 0;
}