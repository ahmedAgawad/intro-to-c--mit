#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	//  constant pointers

	// pointing to a const variable
	/* const int num1 = 10;
	const int num2 = 20;

	const int *ptr = &num1;

	cout << "address pointing to : " << ptr << endl;
	cout << "value pointing to : " << *ptr << endl;
	cout << "address of pointer variable itself : " << &ptr << endl;

	ptr = &num2;

	cout << "address pointing to : " << ptr << endl;
	cout << "value pointing to : " << *ptr << endl;
	cout << "address of pointer variable itself : " << &ptr << endl; */

	// const pointer
	/* int num1 = 10;
	int *const ptr = &num1;

	cout << "address pointing to : " << ptr << endl;
	cout << "value pointing to : " << *ptr << endl;
	cout << "address of pointer variable itself : " << &ptr << endl; */

	// Pointer arithmetic :
	/* long arr[] = {1, 2, 3, 4};

	long *ptr = arr;
	ptr++;

	cout << "Current pointing value of ptr1 : " << *ptr << endl;

	long *ptr2 = arr + 3;
	cout << "Current pointing value of ptr2 : " << *ptr2 << endl; */

	return 0;
}