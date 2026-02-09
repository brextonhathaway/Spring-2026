// Mini Library Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Step 1: Define the structure
struct Book
{
    int book_id;
    char title[50];
    float price;
};

int main()
{
    // Step 2: Declare a structure variable
    Book book1;

    // Step 3: Assign values
    cout << "Enter Book ID: ";
    cin >> book1.book_id;

    cin.ignore();  // IMPORTANT: clears newline from input buffer

    cout << "Enter Book Title: ";
    cin.getline(book1.title, 50);

    cout << "Enter Book Price: ";
    cin >> book1.price;

    // Step 4: Display values
    cout << "\n--- Book Details ---\n";
    cout << "Book ID: " << book1.book_id << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Price: " << book1.price << endl;

    return 0;
}