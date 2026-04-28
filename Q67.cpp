// write a program to demenostrate encapluation using a class bank account with private attributes account number and balance, and public methods to deposit, withdraw, and display the account details.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    void setAccountDetails(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};