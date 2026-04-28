// Q4.cpp write a program to find the greatest of three numbers entered by the user.

#include <iostream>
using namespace std;

int main() {

    double num1, num2, num3;

    cout << "Enter three numbers: ";

    cin >> num1 >> num2 >> num3;

    double greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }

    if (num3 > greatest) {
        greatest = num3;
    }

    cout << "Greatest: " << greatest << endl;

    return 0;
    
}