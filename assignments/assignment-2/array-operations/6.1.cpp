#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
void printArray(const int arr[], int lengthNum) {
	for (int i = 0; i < lengthNum; i++)
	{
		if(i != lengthNum - 1) {
			cout << arr[i] << ", ";
		} else {
			cout << arr[i];
		}
	}
	
}

int main()
{
	const int arr[6] = {1, 2, 3, 4, 5, 6};

	printArray(arr, 6);

	return 0;
}