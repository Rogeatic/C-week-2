#include "account.h"

void account(){
    int ID = 0;

    int got;

    cout << "Enter Name: ";
    string name;
    cin >> name;

    cout << "Enter Balance: ";
    int balance;
    cin >> balance;

    bool done = false;


    while (done != true){
        cout << "\n\n\n";

        cout << "Account Menu:\n" << "  0. Quit Program\n" << "  1. Display Account Information\n" << "  2. Add a deposit to an account\n" << "  3. Withdraw from an account\n" << "Your choice: ";
        cin >> got;
        

        if(got == 0){
            done = true;
        }
        else if (got == 1){
            cout << "Acount ID: " << ID << "  Name: " << name << "  Balance: " << balance;
        }
        else if (got == 2){
            cout << "Amount to Deposit: ";

            int amountToAdd;
            cin >> amountToAdd;

            balance += amountToAdd;
            cout << "Current Balance: " << balance;
        }
        else if (got == 3){
            cout << "Amount to Withdraw: ";
            
            int amountToRemove;
            cin >> amountToRemove;

            balance -= amountToRemove;
            cout << "Current Balance: " << balance;
        }
        else{
            cout << "BAD INPUT, CHOOSE 0-3";
        }

    }
};