#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
int sum(const int a, const int b) {
	return a + b;
}

double sum(const double a, const double b) {
	return a + b;
}


int main()
{

	cout << sum(2, 3) << endl;
	cout << sum(3.5, 6.3) << endl;
	return 0;
}