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
		if(n >= 0 && n % 5 == 0) {
			cout << n / 5;
		} else {
			continue;
		}

		cout << endl;
	}

	return 0;
}