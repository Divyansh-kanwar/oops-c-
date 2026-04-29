// Q102.cpp write a program  to delete a node from a linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void deleteNode(Node*& head, int key) {
    if (head == nullptr) return;

    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != key) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}


int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    cout << "Original Linked List: ";
    printList(head);

    int key;
    cout << "Enter the value to delete: ";
    cin >> key;

    deleteNode(head, key);

    cout << "Linked List after deletion: ";
    printList(head);

    // Clean up remaining nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}