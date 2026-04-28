// Q76.cpp: write a program to find  the sum of all elements of an array

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << "Sum of the elements of the array: " << sum << endl;
    return 0;
}