// Hospital Patient Records.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Patient
{
    int patient_id;
    char name[50];
    float temperature;
};

int main()
{
    Patient patients[5];

    // Input patient details
    for (int index = 0; index < 5; index++)
    {
        cout << "\n--- Enter details for Patient " << (index + 1) << " ---\n";
        cout << "Patient ID: ";
        cin >> patients[index].patient_id;

        cin.ignore();  // clears the leftover newline so getline works properly

        cout << "Enter name: ";
        cin.getline(patients[index].name, 50);

        cout << "Enter temperature: ";
        cin >> patients[index].temperature;
    }

    // Display all patient details
    cout << "\n====================\n";
    cout << "    Patient Details    \n";
    cout << "====================\n";

    for (int index = 0; index < 5; index++)
    {
        cout << "Patient " << (index + 1) << ": ";
        cout << "Patient ID = " << patients[index].patient_id << ", ";
        cout << "Name = " << patients[index].name << ", ";
        cout << "Temperature = " << patients[index].temperature << endl;
    }

    return 0;
}
