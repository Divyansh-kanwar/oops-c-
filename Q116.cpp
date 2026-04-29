// Q116.cpp: write a program to implement a stack using an array . perform push, pop and display operations.

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[100];
public:
    Stack() {
        top = -1;
    }
    void push(int x) {
        if (top < 99) {
            arr[++top] = x;
        } else {
            cout << "Stack overflow" << endl;
        }
    }
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }
    void display() {
        if (top >= 0) {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }
};
int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    stack.pop();
    stack.display();

    return 0;
}
