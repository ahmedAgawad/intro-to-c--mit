#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main()
{
	int n, max , min, mean = 0, range, currentNum;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> currentNum;
		if (i == 0) {
			max = currentNum;
			min = currentNum;
		}
		if(currentNum > max) {
			max = currentNum;
		} else if(currentNum < min) {
			min = currentNum;
		}
		mean += currentNum;
	}

	mean = mean / n;
	range = max - min;

	cout << "Mean: " << mean << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Range: " << range;

	return 0;
}