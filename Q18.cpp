// write a program to find a remainder of two numbers entered by the user.

#include <iostream>
using namespace std;

int main() {

    int num1, num2, remainder;

    cout << "Enter two numbers: ";

    cin >> num1 >> num2;

    if (num2 != 0) {
        remainder = num1 % num2;
        cout << "Remainder: " << remainder << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
    
}