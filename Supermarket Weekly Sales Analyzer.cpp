// Supermarket Weekly Sales Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int cashiers = 3;
const int days = 4;
int total1;
int total2;
int total3;
int best_cashier;

void read_array(int sales[cashiers][days], int cashiers)
{
    for (int row = 0; row < cashiers + 1; row++)
    {
        cout << "Cashier " << row + 1 << ":\n";
        for (int col = 1; col < days + 1; col++)
        {
            cout << "Day [" << col << "]: ";
            cin >> sales[row][col];
        }
    }
    cout << "Total sales for each cashier:\n";
    for (int row = 1; row < cashiers + 1; row++)
    {
        int total = 0;
        for (int col = 0; col < days + 1; col++)
        {
            if (sales[row][col] >= 0)
            {
                total = total + sales[row][col];
            }
        }
        cout << "Cashier " << (row) << " total sales = " << total << endl;
        switch(row){
        case 1: total1 = total;
            break;
        case 2: total2 = total;
            break;
        case 3: total3 = total;
            break;
        default:
            break;
        }
        if (total1 > 0)
        {
            best_cashier = 1;
        }
        if (total2 > total1)
        {
            best_cashier = 2;
        }
        if (total3 > total2 && total3 > total1)
        {
            best_cashier = 3;
        }
    }
    cout << "Best day for each cashier:\n";
    for (int row = 0; row < cashiers + 1; row++)
    {
        int max = sales[row][0];
        for (int col = 0; col < days; col++)
        {
            if (sales[row][col] > max)
            {
                max = sales[row][col];
            }
        }
        cout << "Cashier " << (row + 1) << " best day = " << max << endl;
    }
    cout << "Best Cashier is Cashier " << best_cashier;
}

int main()
{
    int marks[cashiers][days];
    cout << "Enter sales:\n";
    read_array(marks, cashiers);
    return 0;
}