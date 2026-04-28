// Write a program to count digits and check palindrome.

#include <iostream>
using namespace std;

int main() {

    int num, originalNum, reversedNum = 0, digitCount = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
        digitCount++;
    }

    cout << "Number of digits: " << digitCount << endl;

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
    
}