// Q92.cpp: write a program to print Pascal's triangle.
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int coef;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i) {
                coef = 1;
            } else {
                coef = coef * (i - k + 1) / k;
            }
            cout << coef << " ";
        }
        cout << endl;
    }

    return 0;
}