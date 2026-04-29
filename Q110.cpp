// Q110.cpp: write a program to impement a inheristance using a stack data structure.

#include <iostream>
using namespace std;

class Stack {
protected:
    int top;
    int arr[100];
};
class StackOperations : public Stack {
public:
    StackOperations() {
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
    StackOperations stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    stack.pop();
    stack.display();

    return 0;
}
