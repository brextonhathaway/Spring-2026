// Daily Electricity Usage Analyzer_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void input_usage(int daily_usage[], int day_count)
{
	cout << "Enter electricty usage for day : " << day_count;

	for (int index = 0; index < day_count; index++)
	{
		cout << "Day " << (index + 1) << " usage: ";
		cin >> daily_usage[index];
	}
}

void main_menu()
{
	cout << "\n======= Electricity usage =======" << endl;
	cout << "1. Display daily usage" << endl;
	cout << "2. Total weekly usage" << endl;
	cout << "3. Average Daily Usage" << endl;
	cout << "4. Highest usage" << endl;
	cout << "5. Count days above 10 units" << endl;
	cout << "6. Exit" << endl;
	cout << "Enter your choice: ";
}

void display_usage(int daily_usage[], int day_count)
{
	cout << "\nDaily usage: ";
	for (int index = 0; index < day_count; index++)
	{
		cout << daily_usage[index] << " ";
	}
}

int total_marks(int daily_usage[], int day_count)
{
	int sum_of_days = 0;
	for (int index = 0; index < day_count; index++)
	{
		sum_of_days += daily_usage[index];
	}
	return sum_of_days;
}

float avg_marks(int daily_usage[], int day_count)
{
	int sum_of_days = total_marks(daily_usage, day_count);
	float average_value = (float)sum_of_days / day_count;
	return average_value;
}

int count_passed(int daily_usage[], int day_count)
{
	int pass_count = 0;
	for (int index = 0; index < day_count; index++)
	{
		if (daily_usage[index] > 10)
		{
			pass_count++;
		}
	}
	return pass_count;
}

int high = 0;

int highest_mark(int numbers[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (numbers[index] > high)
		{
			high = numbers[index];
		}
	}
	return high;
}

int main()
{
	const int day_count = 5;
	int daily_usage[day_count];
	int menu_choice = 0;

	input_usage(daily_usage, day_count);

	do
	{
		main_menu();
		cin >> menu_choice;

		switch (menu_choice)
		{
		case 1: display_usage(daily_usage, day_count);
			break;
		case 2: cout << "\nTotal weekly usage = " << total_marks(daily_usage, day_count);
			break;
		case 3: cout << "\nAverage daily usage = " << avg_marks(daily_usage, day_count);
			break;
		case 4: cout << "\nHighest usage = " << highest_mark(daily_usage, day_count);
			break;
		case 5: cout << "\nDays above 10 units = " << count_passed(daily_usage, day_count);
			break;
		case 6: cout << "\nExiting... Goodbye!";
			break;
		default: cout << "Invalid choice. Please enter 1 to 6.";
		}
	} while (menu_choice != 6);
	return 0;
}