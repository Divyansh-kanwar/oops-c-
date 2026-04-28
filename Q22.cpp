// write a program to access array elements using pointer and demonstrate pointer arithmetic.(pointer to array)

#include <iostream> 
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50}; 
    int* ptr = arr; 

    cout << "Array elements using pointer arithmetic: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *ptr << endl; 
        ptr++; 
    }

    return 0;
    
}