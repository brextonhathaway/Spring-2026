// Classroom Seating Chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 3;
const int max_col = 4;

void read_array(int marks[max_row][max_col], int max_row)
{
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << "Seat [" << row << "][" << col << "]: ";
            cin >> marks[row][col];
        }
    }
}

void print_array(int marks[max_row][max_col], int max_row)
{
    cout << "\nSeating Chart:\n";

    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << marks[row][col] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int marks[max_row][max_col];
    cout << "Enter roll numbers for a 3x4 seating chart:\n";
    read_array(marks, max_row);
    print_array(marks, max_row);

    return 0;
}
