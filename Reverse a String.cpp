// Reverse a String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char text[200];
    cin.getline(text, 200);
    int length = 0;
    //strlen(text);

    while (text[length] != '\0')
    {
        length++;
    }
    int left_index = 0;
    int right_index = length - 1;
    while (left_index <= right_index)
    {
        char temp = text[left_index];
        text[left_index] = text[right_index];
        text[right_index] = temp;
        left_index++;
        right_index--;
    }
    cout << text << endl;
    return 0;

}
