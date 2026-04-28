// write program to insert nodes in a linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        cout << "Linked List: ";
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main() {
    LinkedList obj;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        obj.insert(value);
    }

    obj.display();

    return 0;
}