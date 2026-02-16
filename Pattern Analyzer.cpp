//
//  main.cpp
//  Pattern Analyzer
//
//  Created by Brexton Hathaway on 2/4/26.
//

#include <iostream>
using namespace std;

int main()
{
    char input_text[300];
    char search_pattern[100];

    cin.getline(input_text, 300);
    cin.getline(search_pattern, 100);

    int input_text_length = 0;
    while (input_text[input_text_length] != '\0')
    {
        input_text_length++;
    }

    int search_pattern_length = 0;
    while (search_pattern[search_pattern_length] != '\0')
    {
        search_pattern_length++;
    }

    int found_start_index = -1;

    for (int text_index = 0;
         text_index <= input_text_length - search_pattern_length;
         text_index++)
    {
        bool is_match = true;

        for (int pattern_index = 0;
             pattern_index < search_pattern_length;
             pattern_index++)
        {
            if (input_text[text_index + pattern_index] !=
                search_pattern[pattern_index])
            {
                is_match = false;
                break;
            }
        }

        if (is_match)
        {
            found_start_index = text_index;
            break;
        }
    }

    cout << found_start_index << endl;

    return 0;
}
