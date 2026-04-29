// Q117.cpp: write a program to implement a stack using linked list. perform push, pop and display operations.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    void push(int x) {
        Node* newNode = new Node{x, top};
        top = newNode;
    }
    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        } else {
            cout << "Stack underflow" << endl;
        }
    }
    void display() {
        if (top != nullptr) {
            cout << "Stack elements: ";
            Node* current = top;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
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