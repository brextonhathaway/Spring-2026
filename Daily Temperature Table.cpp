// Daily Temperature Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 3;
const int max_col = 4;

void read_array(int marks[max_row][max_col], int max_row)
{
    for (int row = 1; row < max_row+1; row++)
    {
        cout << "City " << row << ":\n";
        for (int col = 1; col < max_col+1; col++)
        {
            cout << "  Day " << col << ": ";
            cin >> marks[row][col];
        }
    }
}

void print_array(int marks[max_row][max_col], int max_row)
{
    cout << "\nTemperature Table:\n";

    for (int row = 1; row < max_row+1; row++)
    {
        for (int col = 1; col < max_col+1; col++)
        {
            cout << marks[row][col] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int marks[max_row][max_col];
    cout << "Enter temperatures for 3 cities over 4 days:\n";
    read_array(marks, max_row);
    print_array(marks, max_row);

    return 0;
}