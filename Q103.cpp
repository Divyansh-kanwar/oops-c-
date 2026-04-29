//Q103.cpp: write to find the last node of a linked list

#include <iostream>
using namespace std;    

struct Node {
    int data;
    Node* next;
};
Node* findLastNode(Node* head) {
    if (head == nullptr) return nullptr;

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    return current;
}
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    Node* lastNode = findLastNode(head);
    if (lastNode != nullptr) {
        cout << "Last node data: " << lastNode->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}