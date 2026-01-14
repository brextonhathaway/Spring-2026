#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int cost[5];
	cout << "Costs: " << endl;
	for (int index = 0; index < size; index++)
	{
		cin >> cost[index];
	}

	cout << "Cost: ";
	for (int index = 0; index < size; index++)
	{
		cout << cost[index] << " ";
	}

	int max_cost = 0;
	for (int index = 0; index < size; index++)
	{
		if (cost[index] > max_cost)
		{
			max_cost = cost[index];
		}
	}
	cout << endl;
	cout << "Max Cost: " << max_cost;

	return 0;
}
