#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int difference(const int x, const int y) {
	int diff = abs(x - y);
	return diff;
}

int main()
{
	cout << difference(24, 1238);
	return 0;
}