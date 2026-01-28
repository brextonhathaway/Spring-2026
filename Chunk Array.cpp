// Chunk Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = { 1,2,3,4,5,6,7 };
    int array_size = 7;
    int chunk_size = 3;
    int index = 0;

    while (index < array_size)
    {
        cout << "[ ";
        for (int count = 0; count < chunk_size && index < array_size; count++)
        {
            cout << numbers[index] << " ";
            index++;
        }
        cout << "] ";
    }
    return 0;
}
