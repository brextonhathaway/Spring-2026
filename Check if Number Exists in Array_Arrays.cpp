// Check if Number Exists in Array_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void search_element(int numbers[], int size, int search_num)
{
	bool found = false;
	for (int index = 0; index < size; index++)
	{
		if (numbers[index] == search_num)
		{
			found = true;
			break;
		}
	}
	if (found)
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
}

int main()
{
	const int size = 5;
	int numbers[size] = { 4, 7, 9, 12, 15 };
	int search_num;

	cout << "Enter the number: ";
	cin >> search_num;

	search_element(numbers, size, search_num);

	return 0;
}