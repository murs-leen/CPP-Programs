#include <iostream>
using namespace std;
int main()
{
    int amount;
    char transaction = 'y'; // Ask if user want to make another transaction
    while (transaction == 'y' || transaction == 'Y')
    {
        cout << "Enter amount to withdraw (1000 - 10000):";
        cin >> amount;
        if (amount >= 1000 && amount <= 10000) // For valid amount
        { 
            cout << "You successfully withdraw " << amount << " money" << endl;
        }
        else
        { // For invalid amount
            cout << "You entered an invalid amount of money (Range : 1000 to 10000)" << endl;
            continue; // To skip the remaining statements
        }
        // Ask if user want to make another transaction
        cout << "Would you like to make another transaction (N/Y): ";
        cin >> transaction;
    }
    cout << "Thankyou for visiting the ATM, Goodbye" << endl;
    return 0;
}