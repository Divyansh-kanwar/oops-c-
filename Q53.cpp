// write a program to delete an element from from a given position in an array.

#include <iostream>
using namespace std;

int main() {
    int n, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the position to delete (1 to " << n << "): ";
    cin >> pos;

    if(pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "\nArray after deletion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}