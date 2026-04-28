// Q82.cpp: write a program to count even and odd numbers in an array.

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {10, 21, 32, 43, 54};
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even elements in the array: " << evenCount << endl;
    cout << "Number of odd elements in the array: " << oddCount << endl;
    return 0;
}
