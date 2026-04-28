// Q99.cpp write a program to print left arrow pattern using stars.
//     *
//     * *
//     * * *
//     * *
//     *

#include <iostream>
using namespace std;

int main() {
    int n = 3; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}