// write a program to find the largest element in an array using pointers.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 50, 30, 40, 20};
    int* ptr = arr;
    int* maxPtr = ptr;

    for (int i = 0; i < 5; i++) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
        ptr++;
    }

    cout << "The largest element in the array is: " << *maxPtr << endl;

    return 0;
}