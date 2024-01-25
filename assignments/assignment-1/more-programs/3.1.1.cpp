#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main()
{

	// error vars cannot be redeclared again
	int arg1;
	arg1 = -1;
	int arg1 = 5;
	cout << arg1;
	return 0;
}