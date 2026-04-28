// write a program to find the largest element in an array 

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

    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "\nLargest element in the array is: " << largest << endl;

    return 0;
    
}   