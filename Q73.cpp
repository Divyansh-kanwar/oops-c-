// Q73.cpp write a program to reverse a linked list and display it.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    void insert(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next; 
            current->next = prev; 
            prev = current;
            current = next; 
        }
        head = prev;
    }
    void display() {
        Node* current = head;
        while(current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main() {
    LinkedList list;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        list.insert(value);
    }

    cout << "Original Linked List: ";
    list.display();

    list.reverse();

    cout << "Reversed Linked List: ";
    list.display();

    return 0;
}
