// write a program to demonstrate the use of pointer to store the address of a variable and access its value.

#include <iostream>
using namespace std;

int main() {

    int num = 42; 
    int* ptr = &num; 

    cout << "Value of num: " << num << endl; 

    cout << "Address of num: " << &num << endl; 

    cout << "Value stored in ptr (address of num): " << ptr << endl;

    cout << "Value pointed to by ptr: " << *ptr << endl; 
    

    return 0;
    
}