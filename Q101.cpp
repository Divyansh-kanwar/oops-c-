// write a program to print a linked list 

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

int main() {
   
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    cout << "Linked List: ";
    printList(head);

    delete head->next->next; 
    delete head->next;     
    delete head;             

    return 0;
}