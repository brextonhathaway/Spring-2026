#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int battery[5];
	cout << "Battery Inputs: " << endl;
	for (int index = 0; index < size; index++)
	{
		cin >> battery[index];
	}

	cout << "Battery: ";
	for (int index = 0; index < size; index++)
	{
		cout << battery[index] << " ";
	}

	int low_readings = 0;
	for (int index = 0; index < size; index++)
	{
		if (battery[index] < 20)
		{
			low_readings++;
		}
	}
	cout << endl;
	cout << "Low readings (<20%): " << low_readings;

	return 0;
}
