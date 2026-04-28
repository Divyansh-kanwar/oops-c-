// write a program to find the maximum element in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxElement = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "\nMaximum element in the array: " << maxElement << endl;

    return 0;
}