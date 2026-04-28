// write a program to search an element using linear search in an array.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if(result == -1) {
        cout << "Element not found!" << endl;
    } else {
        cout << "Element found at position: " << result + 1 << endl;
    }

    return 0;
}