// Q80.cpp: write a program to search an element using linear search in an array.

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {10, 20, 30, 40, 50};
    int key;
    bool found = false;

    cout << "Enter the element to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Element " << key << " found in the array." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}