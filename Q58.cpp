// write a program to search an element using interpolation search in an array.

#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high && key >= arr[low] && key <= arr[high]) {
        if(low == high) {
            if(arr[low] == key) return low;
            else return -1;
        }
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]);
        if(arr[pos] == key) {
            return pos;
        } else if(arr[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}

int main() {
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

    int result = interpolationSearch(arr, n, key);

    if(result == -1) {
        cout << "Element not found!" << endl;
    } else {
        cout << "Element found at position: " << result + 1 << endl;
    }

    return 0;
}