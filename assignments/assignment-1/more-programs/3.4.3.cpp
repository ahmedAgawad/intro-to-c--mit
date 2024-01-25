#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n >= 0 && n % 5 == 0)
		{
			cout << n / 5;
			cout << endl;
		}
		else if (n < 0)
		{
			cout << endl;
			break;
		}
	}

	cout<< "Goodbye!";
	return 0;
}