#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

const int LENGTH = 2; // length
const int WIDTH = 2;	 // width

void transpose(const int input[][LENGTH], int output[][WIDTH])
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			output[j][i] = input[i][j];
		}
	}
}

int main()
{

	return 0;
}