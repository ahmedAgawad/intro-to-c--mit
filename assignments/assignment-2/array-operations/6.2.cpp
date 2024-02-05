#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

void reverse(int nums[], const int arrLength)
{
	for (int i = 0; i < arrLength / 2; i++)
	{
		int temp = nums[i];
		nums[i] = nums[arrLength - i - 1];
		nums[arrLength - i - 1] = temp;
	}
}

int main()
{
	int nums1[4] = {1, 2, 3, 4};
	int nums2[5] = {1, 2, 3, 4, 5};
	reverse(nums1, 4);
	reverse(nums2, 5);
	return 0;
}