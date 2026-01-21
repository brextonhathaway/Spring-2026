// Print Even Numbers_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print_even(int marks[], int size)
{
	for (int num = 0; num < size; num++)
	{
		if (marks[num] % 2 == 0)
		{
			cout << marks[num] << " " ;
		}
	}
}

int main()
{
	const int size = 5;
	int marks[size] = { 10, 15, 20, 25, 30};
	print_even(marks, 5);
	return 0;
}