// write a program to delete an element from a given position in an array.

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos;

    cout << "Enter the position of the element to delete (0 to " << n-1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}