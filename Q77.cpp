//Q77.cpp: write a program to find the largest element in an array.

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {10, 20, 30, 40, 50};
    int largest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element in the array: " << largest << endl;
    return 0;
}