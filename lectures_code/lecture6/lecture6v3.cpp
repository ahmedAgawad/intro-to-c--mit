#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
class Point {
	public:
		double x, y;

	Point() {
		x = 0.0;
		y = 0.0;
		cout << "default constructor" << endl;
	}

	Point(double nx, double ny) {
		x = nx;
		y = ny;
		cout << "2-parameter constructor" << endl;
	}


};

int
main()
{
	
	Point p1(1.0,2.0);
	Point p2 = p1;
	p2.x = 5;
	cout << p1.x;
	return 0;
}