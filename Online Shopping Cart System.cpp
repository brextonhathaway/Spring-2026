// Online Shopping Cart System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Product
{
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

int main()
{
    Product cart[5];
    float total_bill = 0.0;

    // Input product details
    for (int index = 0; index < 5; index++)
    {
        cout << "\nEnter details for Product " << (index + 1) << endl;

        cout << "Product ID: ";
        cin >> cart[index].product_id;

        cin.ignore();  // clear newline before getline

        cout << "Product Name: ";
        cin.getline(cart[index].product_name, 50);

        cout << "Price: ";
        cin >> cart[index].price;

        cout << "Quantity: ";
        cin >> cart[index].quantity;
    }

    // Display bill details
    cout << "\n==== Shopping Cart Bill ====\n";

    for (int index = 0; index < 5; index++)
    {
        float individual_cost = cart[index].price * cart[index].quantity;
        total_bill += individual_cost;

        cout << "Product: " << cart[index].product_name << endl;
        cout << "Cost: " << individual_cost << endl;
        cout << "--------------------------\n";
    }

    // Display final bill amount
    cout << "Final Total Bill: " << total_bill << endl;

    return 0;
}