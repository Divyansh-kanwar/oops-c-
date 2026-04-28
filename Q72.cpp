// Q72.cpp write a program to insert nodes at the end of a linked list and display it.

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
    LinkedList();
    void insertAtEnd(int data);
    void display();
};
LinkedList::LinkedList() {
    head = nullptr;
}
void LinkedList::insertAtEnd(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void LinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    LinkedList list;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        list.insertAtEnd(value);
    }

    cout << "Linked List: ";
    list.display();

    return 0;
}
