// write a program to implement a stack using an array  
#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100];
public:
    Stack() {
        top = -1;
    }
    void push(int x) {
        if(top < 99) {
            arr[++top] = x;
        } else {
            cout << "Stack overflow!" << endl;
        }
    }
    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack underflow!" << endl;
        }
    }
    int peek() {
        if(top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty!" << endl;
            return -1; 
        }
    }
    bool isEmpty() {
        return top == -1;
    }
    void display() {
        if(top >= 0) {
            cout << "Stack elements: ";
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack is empty!" << endl;
        }
    }
};