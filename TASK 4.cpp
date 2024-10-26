#include <iostream>
using namespace std;

int main() 
{
    char service;
    float balance;
    float amount;
    float charges;
    cout << "Enter your current balance:";
    cin >> balance;

    // menu 
    cout << "Bank Services Menu:"<< endl;
    cout << "D = Deposit"<< endl;
    cout << "W = Withdraw"<< endl;
    cout << "T = Transfer"<< endl;
    cout << "Enter the service you want (D/W/T): ";
    cin >> service;


    cout << "Enter the amount for the operation: ";
    cin >> amount;

   
    switch (service) {
        case 'D':  
        case 'd':  
            charges = amount * 0.005; 
            balance += (amount - charges); 
            cout << "You deposited: $" << amount << endl;
            cout << "Charges for deposit: $" << charges << endl;
            cout << "New balance after deposit: $" << balance << endl;
            break;

        case 'W':  
        case 'w':  
            charges = amount * 0.015; 
            if (amount + charges <= balance) {
                balance -= (amount + charges); 
                cout << "You withdrew: $" << amount << endl;
                cout << "Charges for withdrawal: $" << charges << endl;
                cout << "New balance after withdrawal: $" << balance << endl;
            } else {
                cout << "Error: Insufficient funds for this withdrawal." << endl;
            }
            break;

        case 'T':  
        case 't':  
            charges = amount * 0.025; 
            if (amount + charges <= balance) {
                balance -= (amount + charges); 
                cout << "You transferred: $" << amount << endl;
                cout << "Charges for transfer: $" << charges << endl;
                cout << "New balance after transfer: $" << balance << endl;
            } else {
                cout << "Error: Insufficient funds for this transfer." << endl;
            }
            break;

        default:
            cout<<"Error: Invalid service selected. Please choose D, W, or T." << endl;
            break;
    }

    return 0;
}
