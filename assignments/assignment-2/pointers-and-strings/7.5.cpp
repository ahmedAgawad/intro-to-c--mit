#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
 
int main()
{
	char *oddOrEven = "Never odd or even";


	char *nthCharPtr = &oddOrEven[5];
	nthCharPtr--;
	char **pointerPtr = &nthCharPtr;
	
}