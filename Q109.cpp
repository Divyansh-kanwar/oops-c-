// Q109.cpp: write a program to create class bank account with data members balance and account number and member functions to deposit, withdraw and display balance.(hybrid inheritance)

#include <iostream>
using namespace std;

class BankAccount {
    private:
    double balance;

    public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000.0); 

    account.displayBalance();

    account.deposit(500.0);
    account.displayBalance();

    account.withdraw(200.0);
    account.displayBalance();

    account.withdraw(1500.0); 

    return 0;
}