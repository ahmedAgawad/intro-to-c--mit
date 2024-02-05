#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
double sum(double num1, double num2, double num3 = 0, double num4 = 0 ) {
	return (num1 + num2 + num3 + num4);
}

int main()
{
	cout << sum(1, 2, 3.5, 2.1);
	return 0;
}