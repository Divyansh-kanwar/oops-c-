// Q95.cpp: write a program to print a reverse number triangle.
//       5 4 3 2 1
//      4 3 2 1
//     3 2 1
//    2 1
//   1

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = i; k >= 1; k--) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}