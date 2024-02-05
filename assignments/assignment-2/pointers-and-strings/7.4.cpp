#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
void swapNums(int **a, int **b) {
	int * tempLoc = *a;
	*a = *b;
	*b = tempLoc;
}

int main()
{
	int x = 5, y = 6;
	int *ptr1 = &x, *ptr2 = &y;
	swapNums(&ptr1, &ptr2);

	cout << *ptr1 << " " << *ptr2;
	return 0;
}