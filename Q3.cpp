// Q3.cpp write a program to add two numbers entered by the user and display the result.

#include <iostream>
using namespace std;

int main() {

    double num1, num2, sum;

    cout << "Enter two numbers: ";

    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << "Sum: " << sum << endl;

    return 0;
    
}