// Q86.cpp: write a program to print inverted right angle triangle pattern using stars.
//     * * * * *
//     * * * *
//     * * *
//     * *
//     * 

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}