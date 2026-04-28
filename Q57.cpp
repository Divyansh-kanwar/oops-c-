// write a program to search an element using binary search in an array.

#include <iostream>
using namespace std;

int main (){
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements (sorted):\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    bool found = false;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = true;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found) {
        cout << "Element found at position: " << mid + 1 << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}