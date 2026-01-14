#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int seats[5];
	cout << "Enter the seats: " << endl;
	for (int index = 0; index < size; index++)
	{
		cin >> seats[index];
	}

	cout << "Enter the new second seat value to be updated: ";
	int new_seat;
	cin >> new_seat;
	seats[1] = new_seat;

	cout << "Updated seats: ";
	for (int index = 0; index < size; index++)
	{
		cout << seats[index] << " ";
	}

	return 0;
}
