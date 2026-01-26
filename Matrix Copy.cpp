// Matrix Copy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 2;
const int max_col = 3;

void read_array(int matrix_A[max_row][max_col], int max_row)
{
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << "A [" << row << "][" << col << "]: ";
            cin >> matrix_A[row][col];
        }
    }
}

void copy_array(int matrix_B[max_row][max_col], int matrix_A[max_row][max_col])
{
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            matrix_B[row][col] = matrix_A[row][col];
        }
    }
}

void print_array(int matrix_B[max_row][max_col], int max_row)
{
    cout << "\nMatrix B (copy of A) :\n";

    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << matrix_B[row][col] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int matrix_A[max_row][max_col];
    int matrix_B[max_row][max_col];
    cout << "Enter values for matrix A (2x3):\n";
    read_array(matrix_A, max_row);
    copy_array(matrix_B, matrix_A);
    print_array(matrix_B, max_row);

    return 0;
}
