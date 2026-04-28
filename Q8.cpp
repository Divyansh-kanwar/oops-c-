// Q8.cpp write a program to find the square of a number entered by the user.

#include <iostream>
using namespace std;

int main() {
    int x, square;

    cout << "Enter a number: ";
    cin >> x;

    square = x * x;

    cout << "Square of the number: " << square << endl;
    
    return 0;
}