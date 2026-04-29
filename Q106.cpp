// Q106.cpp: write a program to print alternete nodes of a linked list  

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printAlternateNodes(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        if (current->next != nullptr) {
            current = current->next->next; 
        } else {
            break; 
        }
    }
    cout << endl;
}
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    head->next->next->next->next = new Node{5, nullptr};

    cout << "Alternate nodes in the linked list: ";
    printAlternateNodes(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}