// Q105.cpp:write a program to check even or odd number using linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void checkEvenOdd(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data % 2 == 0) {
            cout << current->data << " is even." << endl;
        } else {
            cout << current->data << " is odd." << endl;
        }
        current = current->next;
    }
}
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    checkEvenOdd(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}