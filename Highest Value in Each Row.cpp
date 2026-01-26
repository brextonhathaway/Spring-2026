// Highest Value in Each Row.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 3;
const int max_col = 4;

void read_array(int marks[max_row][max_col], int max_row)
{
    for (int row = 0; row < max_row+1; row++)
    {
        cout << "Student " << row + 1 << ":\n";
        for (int col = 0; col < max_col; col++)
        {
            cout << "Subject [" << col << "]: ";
            cin >> marks[row][col];
        }
    }
    cout << "Highest mark for each student:\n";
    for (int row = 0; row < max_row + 1; row++)
    {
        int max = marks[row][0];
        for (int col = 0; col < max_col; col++)
        {
            if (marks[row][col] > max)
            {
                max = marks[row][col];
            }
        }
        cout << "Student " << (row + 1) << " highest = " << max << endl;
    }
}

int main()
{
    int marks[max_row][max_col];
    cout << "Enter student marks:\n";
    read_array(marks, max_row);
    return 0;
}