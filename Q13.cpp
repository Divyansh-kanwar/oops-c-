//Q13.cpp write a program to find the ASCII value of a character entered by the user.

#include <iostream>
using namespace std;

int main() {

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int asciiValue = static_cast<int>(ch);

    cout << "ASCII value of '" << ch << "' is: " << asciiValue << endl;

    return 0;
    
}