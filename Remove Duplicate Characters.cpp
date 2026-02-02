// Remove Duplicate Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char text[200];
    char result[200];
    cin.getline(text,200);
    int unique_index = 0;

    for (int input_index = 0; text[input_index] != '\0'; input_index++)
    {
        bool is_already_present = false;
        for (int check_index = 0; check_index < unique_index; check_index++)
        {
            if (text[input_index] == result[check_index])
            {
                is_already_present = true;
                break;
            }
        }
        if (!is_already_present)
        {
            result[unique_index] = text[input_index];
            unique_index++;
        }
    }
    result[unique_index] = '\0';
    cout << result << endl;

    return 0;
}