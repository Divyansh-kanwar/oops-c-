// write a program to find the sum of two numbers of largest of two numbers.

#include <iostream>
using namespace std;

int main() {

    int a, b, sum;

    cout << "Enter two numbers: ";

    cin >> a >> b;

if (a > b) {
        sum = a + b;
        
        cout << "The sum of the two numbers is: " << sum << endl;

        cout << "The largest number is: " << a << endl;

    } else if (b > a) {

        sum = a + b;

        cout << "The sum of the two numbers is: " << sum << endl;

        cout << "The largest number is: " << b << endl;

    } else {

        cout << "Both numbers are equal." << endl;
    }

    return 0;
    
}