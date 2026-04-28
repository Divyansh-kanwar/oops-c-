// write a program to check pointer to pointer and demonstrate pointer arithmetic.

#include <iostream>
using namespace std;

int main() {

    int num = 42; 
    int* ptr1 = &num; 
    int** ptr2 = &ptr1; 

    cout << "Value of num: " << num << endl; 

    cout << "Address of num: " << &num << endl; 

    cout << "Value stored in ptr1 (address of num): " << ptr1 << endl;

    cout << "Value pointed to by ptr1: " << *ptr1 << endl; 


    cout << "Value stored in ptr2 (address of ptr1): " << ptr2 << endl;

    cout << "Value pointed to by ptr2 (address of num): " << *ptr2 << endl; 
    
    cout << "Value pointed to by the pointer pointed to by ptr2: " << **ptr2 << endl; 

    return 0;
    
}