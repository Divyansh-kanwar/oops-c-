// Q5.cpp write a program to swap two numbers entered by the user.

#include <iostream>
using namespace std;

int main() {

    int x , y , temp;

    cout << "Enter two numbers: ";

    cin >> x >> y;

    // Swapping
    temp = x;
    x = y;
    y = temp;

    cout << "After swapping: " << endl;
    cout << "First number: " << x << endl;
    cout << "Second number: " << y << endl;

    return 0;
    
}