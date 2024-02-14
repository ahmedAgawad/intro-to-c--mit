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

	void offset(double offsetX, double offsetY)
	{
		x += offsetX;
		y += offsetY;
	}

	void print()
	{
		cout << "(" << x << "," << y << ")";
	}
};

class Vector
{
public:
	Point start;
	Point end;
	void offset(double offsetX, double offsetY)
	{
		start.offset(offsetX, offsetY);
		end.offset(offsetX, offsetY);
	}
	void print()
	{
		start.print();
		cout << "->";
		end.print();
		cout << endl;
	}
};

int main()
{
	Vector vec1;
	vec1.start.x = 1.0;
	vec1.start.y = 2.0;
	vec1.end.x = 3.0;
	vec1.end.y = 4.0;

	vec1.print();
	return 0;
}