// Q75.cpp: write a program to display all elements of an array

#include <iostream>
using namespace std;

int main() {
    int arr [5] = {10, 20, 30, 40, 50};
    cout << "Elements of the array: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;

}
