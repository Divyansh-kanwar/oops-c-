// write a program to find the average of three numbers entered by the user.

#include <iostream>
using namespace std;

int main() {

    double num1, num2, num3, average;

    cout << "Enter three numbers: ";

    cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "Average: " << average << endl;

    return 0;
    
}