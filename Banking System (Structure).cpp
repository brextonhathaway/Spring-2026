// Banking System (Structure).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Step 1: Define the structure
struct BankAccount
{
    int account_number;
    char account_holder_name[50];
    float balance;
};

int main()
{
    // Step 2: Declare a structure variable
    BankAccount account;

    // Step 3: Assign values
    cout << "Enter Account Number: ";
    cin >> account.account_number;

    cin.ignore();  // IMPORTANT: clears newline from input buffer

    cout << "Enter Account Holder Name: ";
    cin.getline(account.account_holder_name, 50);

    cout << "Enter Account Balance: ";
    cin >> account.balance;

    // Step 4: Display values
    cout << "\n--- Account Details ---\n";
    cout << "Account Number: " << account.account_number << endl;
    cout << "Account Holder: " << account.account_holder_name << endl;
    cout << "Balance: " << account.balance << endl;

    return 0;
}
