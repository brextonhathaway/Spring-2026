// Check Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char word[50];
    cin >> word;
    int length = 0;

    while (word[length] != '\0')
    {
        length++;
    }

    int left_index = 0;
    int right_index = length - 1;
    bool is_palindrome = true;

    while (left_index < right_index)
    {
        if (word[left_index] != word[right_index])
        {
            is_palindrome = false;
        }
        left_index++;
        right_index--;
    }

    if (is_palindrome == true)
    {
        cout << word << " is a palindrome." << endl;
    }
    else if(is_palindrome == false)
    {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
