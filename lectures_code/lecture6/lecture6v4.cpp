#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

class Point
{
public:
	double x, y;
	Point(double nx, double ny)
	{
		x = nx;
		y = ny;
		cout << "run";
	}

};

int main()
{
	Point p1(1.0, 2.0);

	return 0;
}