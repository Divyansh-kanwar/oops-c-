// write a program to add element  at the last position in an array.

#include <iostream>
using namespace std;

int main() {
    int n, newElement;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the new element to add at the last position: ";
    cin >> newElement;

    if(n < 100) {
        arr[n] = newElement;
        n++;
    } else {
        cout << "Array is full! Cannot add new element." << endl;
        return 1;
    }

    cout << "\nArray after adding the new element:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}