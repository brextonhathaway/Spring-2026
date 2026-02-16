//
//  main.cpp
//  Longest Word in a Sentence
//
//  Created by Brexton Hathaway on 2/4/26.
//

#include <iostream>
using namespace std;

int main()
{
    char input_sentence[300];
    cin.getline(input_sentence, 300);

    int longest_word_start = 0;
    int longest_word_length = 0;

    int current_word_start = 0;
    int current_word_length = 0;

    for (int character_index = 0; ; character_index++)
    {
        if (input_sentence[character_index] == ' ' ||
            input_sentence[character_index] == '\0')
        {
            if (current_word_length > longest_word_length)
            {
                longest_word_length = current_word_length;
                longest_word_start = current_word_start;
            }

            if (input_sentence[character_index] == '\0')
            {
                break;
            }

            current_word_length = 0;
            current_word_start = character_index + 1;
        }
        else
        {
            current_word_length++;
        }
    }

    // Print longest word
    for (int print_index = 0; print_index < longest_word_length; print_index++)
    {
        cout << input_sentence[longest_word_start + print_index];
    }
    cout << endl;

    return 0;
}
