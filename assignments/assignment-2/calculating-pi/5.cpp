#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
double piCalc(double n) {
	srand(time(0));
	double count = 0;

	for (int i = 0; i < n; i++)
	{
		double x = ((double)rand()) / RAND_MAX;
		double y = ((double)rand()) / RAND_MAX;

		if(sqrt(pow(x,2) + pow(y,2)) <= 1 ) {
			count++;
		}
	}

	return (4 * (count / n));
}

int main()
{

	cout << piCalc(5000000);
	return 0;
}