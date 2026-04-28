// Q97.cpp: write a program to print 0 - 1 triangle pattern.
//       1
//      1 0
//     1 0 1
//    1 0 1 0
//   1 0 1 0 1

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            if (k % 2 == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}