// Q78.cpp: write a program to find the smallest element in an array.

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {12, 55, 79, 7, 38};
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest element in the array: " << smallest << endl;
    return 0;
}