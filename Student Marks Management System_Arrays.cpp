// Student Marks Management System_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void enter_marks(int student_marks[], int student_count)
{
	cout << "Enter marks for " << student_count << " students\n";
	
	for (int index = 0; index < student_count; index++)
	{
		cout << "Student " << (index + 1) << " mark: ";
		cin >> student_marks[index];
	}
}

void main_menu()
{
	cout << "\n======= Student Marks Menu =======" << endl;
	cout << "1. Display all marks" << endl;
	cout << "2. Find total marks" << endl;
	cout << "3. Find average marks" << endl;
	cout << "4. Count passed students (pass mark = 40)" << endl;
	cout << "5. Find highest mark" << endl;
	cout << "6. Exit" << endl;
	cout << "Enter your choice: ";
}

void display_marks(int student_marks[], int student_count)
{
	cout << "\nMarks of all students: ";
	for (int index = 0; index < student_count; index++)
	{
		cout << student_marks[index] << " ";
	}
}

int total_marks(int student_marks[], int student_count)
{
	int sum_of_marks = 0;
	for (int index = 0; index < student_count; index++)
	{
		sum_of_marks += student_marks[index];
	}
	return sum_of_marks;
}

float avg_marks(int student_marks[], int student_count)
{
	int sum_of_marks = total_marks(student_marks, student_count);
	float average_value = (float)sum_of_marks / student_count;
	return average_value;
}

int count_passed(int student_marks[], int student_count)
{
	int pass_count = 0;
	for (int index = 0; index < student_count; index++)
	{
		if (student_marks[index] >= 40)
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
	const int student_count = 5;
	int student_marks[student_count];
	int menu_choice = 0;

	enter_marks(student_marks, student_count);

	do
	{
		main_menu();
		cin >> menu_choice;

		switch (menu_choice)
		{
			case 1: display_marks(student_marks, student_count);
				break;
			case 2: cout << "\nTotal marks = " << total_marks(student_marks, student_count);
				break;
			case 3: cout << "\nAverage marks = " << avg_marks(student_marks, student_count);
				break;
			case 4: cout << "\nPassed students = " << count_passed(student_marks, student_count);
				break;
			case 5: cout << "\nHighest mark = " << highest_mark(student_marks, student_count);
				break;
			case 6: cout << "\nExiting... Goodbye!";
				break;
			default: cout << "Invalid choice. Please enter 1 to 6.";
		}
	} while (menu_choice != 6);
	return 0;
}