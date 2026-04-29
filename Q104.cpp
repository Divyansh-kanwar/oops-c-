//Q104.cpp: write a program to sum all the elements of a linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
int sumList(Node* head) {
    int sum = 0;
    Node* current = head;
    while (current != nullptr) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    int totalSum = sumList(head);
    cout << "Sum of all elements in the linked list: " << totalSum << endl;

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}