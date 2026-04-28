// “Write a C++ program to create a Bank Account system where a user can deposit and withdraw money with balance validation (minimum balance condition). Use constructor and functions.”

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    int pin;
    double balance;

    bool isValidAmount(double amt) {
        return amt > 0;
    }

public:
    BankAccount(int a, int p, double b) {
        accNo = a;
        pin = p;
        if (b >= 500)
            balance = b;
        else {
            cout << "Minimum balance should be 500\n";
            balance = 500;
        }
    }

    void deposit(double amt) {
        if (isValidAmount(amt)) {
            balance += amt;
            cout << "Deposited: " << amt << endl;
        } else {
            cout << "Invalid amount\n";
        }
    }

    void withdraw(double amt) {
        if (isValidAmount(amt) && balance - amt >= 500) {
            balance -= amt;
            cout << "Withdrawn: " << amt << endl;
        } else {
            cout << "Insufficient balance or invalid amount\n";
        }
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b(101, 1234, 300);

    b.display();

    b.deposit(1000);
    b.withdraw(200);

    b.display();

    return 0;
}