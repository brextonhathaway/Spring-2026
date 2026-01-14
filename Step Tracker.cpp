#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int steps[size];
	cout << "Enter the step counts: ";
	for (int index = 0; index < size; index++)
	{
		cin >> steps[index];
	}

	cout << "Steps: ";
	for (int index = 0; index < size; index++)
	{
		cout << steps[index];
	}
	cout << endl;

	int total = 0;
	for (int index = 0; index < size; index++)
	{
		total += steps[index];
	}
	cout << "Total: " << total << endl;

	return 0;
}