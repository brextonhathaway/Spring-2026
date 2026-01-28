// Leet Code Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = { 1,2,3,4,5,6,7 };
    int array_size = 7;
    int rotate_steps = 3;

    //rotate the array rotate_steps times
    for (int step = 1; step <= rotate_steps; step++)
    {
        int last_element = numbers[array_size - 1];
        for (int index = array_size - 1; index > 0; index--)
        {
            numbers[index] = numbers[index - 1];
        }
        numbers[0] = last_element;
    }
    for (int index = 0; index < array_size; index++)
    {
        cout << numbers[index] << " ";
    }
    return 0;
}
