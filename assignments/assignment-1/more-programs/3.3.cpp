#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int n, counter = 0, currentNum = 2;
	cin >> n;

	while (counter != n)
	{
		for (int i = 2; i < currentNum; i++)
		{
			if (currentNum % i == 0)
			{
				break;
			}
			if (i == currentNum - 1)
			{
				counter++;
				cout << currentNum << " ";
			}
		}

		currentNum++;
	}

	return 0;
}