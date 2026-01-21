// Count Passed Students_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int passing = 60;
int pass_count = 0;

void count_pass(int numbers[], int size)
{

	for (int index = 0; index < size; index++)
	{
		if (numbers[index] >= passing)
		{
			pass_count++;
		}
	}

	cout << "Passed Students: " << pass_count << endl;
}

int main()
{
	const int size = 5;
	int numbers[size] = { 34, 78, 40, 22, 90 };

	count_pass(numbers, size);

	return 0;
}