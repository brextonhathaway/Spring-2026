// Classroom Attendence Heatmap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 3;   // students
const int max_col = 4;   // days

void read_attendance(int attendance[][max_col], int max_row);
void print_attendance(int attendance[][max_col], int max_row);
void student_summary(int attendance[][max_col], int max_row);
void worst_day(int attendance[][max_col], int max_row);

int main()
{
    int attendance[max_row][max_col];

    read_attendance(attendance, max_row);
    print_attendance(attendance, max_row);
    student_summary(attendance, max_row);
    worst_day(attendance, max_row);

    return 0;
}

// input function
void read_attendance(int attendance[][max_col], int max_row)
{
    cout << "Enter attendance (1 = Present, 0 = Absent)\n";

    for (int row = 0; row < max_row; row++)
    {
        cout << "Student " << row + 1 << ":\n";
        for (int col = 0; col < max_col; col++)
        {
            cout << " Day " << col + 1 << ": ";
            cin >> attendance[row][col];
        }
    }
}

// print table function
void print_attendance(int attendance[][max_col], int max_row)
{
    cout << "\nAttendance Table:\n";
    cout << "      Day1 Day2 Day3 Day4\n";

    for (int row = 0; row < max_row; row++)
    {
        cout << "Stu" << row + 1 << "   ";
        for (int col = 0; col < max_col; col++)
        {
            cout << attendance[row][col] << "    ";
        }
        cout << endl;
    }
}

// student summary function
void student_summary(int attendance[][max_col], int max_row)
{
    cout << "\nStudent Summary:\n";

    for (int row = 0; row < max_row; row++)
    {
        int present = 0;
        int absent = 0;

        for (int col = 0; col < max_col; col++)
        {
            if (attendance[row][col] == 1)
                present++;
            else
                absent++;
        }

        cout << "Student " << row + 1
            << ": Present = " << present
            << ", Absent = " << absent << endl;

        if (absent >= 2)
        {
            cout << "⚠ Warning: Student " << row + 1
                << " has " << absent << " absences!\n";
        }
    }
}

// worst day fun ction (column-wise)
void worst_day(int attendance[][max_col], int max_row)
{
    int worst_day_index = 0;
    int max_absences = -1;

    for (int col = 0; col < max_col; col++)
    {
        int absences_today = 0;
        for (int row = 0; row < max_row; row++)
        {
            if (attendance[row][col] == 0)
            {
                absences_today++;
            }
        }
        if (absences_today > max_absences)
        {
            max_absences = absences_today;
            worst_day_index = col;
        }
    }
    cout << "\nWorst attendence day = Day " << worst_day_index + 1 << " (" << max_absences + 1 << " absences)\n";
}