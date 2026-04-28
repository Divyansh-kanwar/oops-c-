// Q6.cpp write a program to swap two numbers without using third variable.

#include <iostream>
using namespace std;

int main() {

    int x , y;

    cout << "Enter two numbers: ";

    cin >> x >> y;

    x = x + y; 
    y = x - y;  
    x = x - y; 

    cout << "After swapping: " << endl;

    cout << "First number: " << x << endl;
    
    cout << "Second number: " << y << endl;

    return 0;
    
}