// write a program to find the sum of all elements in an array.

#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n) {
    cout << "\nArray elements are:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int calculateSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    inputArray(arr, n);
    displayArray(arr, n);

    int total = calculateSum(arr, n);

    cout << "\nSum of all elements = " << total << endl;

    return 0;
}