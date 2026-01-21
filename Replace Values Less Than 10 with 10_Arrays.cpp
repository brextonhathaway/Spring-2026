// Replace Values Less Than 10 with 10_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print_even(int numbers[], int size)
{
	for (int num = 0; num < size; num++)
	{
		if (numbers[num] < 10)
		{
			numbers[num] = 10;
		}
		cout << numbers[num] << " ";
	}
}

int main()
{
	const int size = 5;
	int numbers[size] = { 5, 12, 8, 20, 3};
	print_even(numbers, 5);
	return 0;
}