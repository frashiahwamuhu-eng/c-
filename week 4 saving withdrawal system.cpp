/* Program to compute employee bonus system (for loop)
Frashiah Wamuhu
BCS-05-0007/2025*/
#include<iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Insufficient balance. Transaction denied." << endl;
            break;
        }

        balance = balance - withdrawal;

        cout << "Remaining balance: " << balance << endl;
      if (balance == 0) {
            cout << "Account balance is zero." << endl;
            break;
        }
    }

    return 0;
}

