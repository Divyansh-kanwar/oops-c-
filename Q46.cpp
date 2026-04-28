// “Write a C++ program to create a BankAccount class with:
// Private data members (account holder, account number, balance)
// Constructor with minimum balance condition
// Functions:
// deposit()
// withdraw()
// display()
// getters (read-only access)
// Demonstrate data hiding and validation.”


#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

    bool isValidAmount(double amount) {
        return amount > 0;
    }

public:
    BankAccount(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;

        if (bal >= 500) {
            balance = bal;
        } else {
            cout << "Minimum balance should be 500. Setting default balance.\n";
            balance = 500;
        }
    }

    double getBalance() {
        return balance;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    void deposit(double amount) {
        if (isValidAmount(amount)) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance - amount >= 500) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance\n";
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Divyansh", 101, 300);

    acc.display();

    acc.deposit(1000);
    acc.withdraw(200);

    acc.display();

    return 0;
}