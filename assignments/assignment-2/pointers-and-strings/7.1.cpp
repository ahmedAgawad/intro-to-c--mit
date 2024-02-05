#include <iostream>
using namespace std;

int strLen(const char * str) {
	int length = 0;
	while(*(str+length) != '\0') {
		length++;
	}
	return length;
}

int main()
{
	return 0;
}