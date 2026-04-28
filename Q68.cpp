// write a program to display the linked list 

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

    void create(int n) {
        Node *temp, *newNode;

        for(int i = 0; i < n; i++) {
            newNode = new Node();
            cout << "Enter data: ";
            cin >> newNode->data;
            newNode->next = NULL;

            if(head == NULL) {
                head = newNode;
            } else {
                temp = head;
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
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
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    obj.create(n);
    obj.display();

    return 0;
}