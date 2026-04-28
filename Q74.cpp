// Q74.cpp: implementation of patient queue using singly linked list.

#include <iostream>
using namespace std;

class patientqueue {
    private:
        struct Node {
            string name;
            int age;
            Node* next;
        };
        Node* front;
        Node* rear;
        public:
        patientqueue() {
            front = rear = nullptr;
        }
        void enqueue(string name, int age) {
            Node* newNode = new Node();
            newNode->name = name;
            newNode->age = age;
            newNode->next = nullptr;

            if (rear == nullptr) {
                front = rear = newNode;
                return;
            }
            rear->next = newNode;
            rear = newNode;
        }
        void dequeue() {
            if (front == nullptr) {
                cout << "Queue is empty!" << endl;
                return;
            }
            Node* temp = front;
            front = front->next;

            if (front == nullptr) {
                rear = nullptr;
            }
            delete temp;
        }
        void display() {
            Node* temp = front;
            while (temp != nullptr) {
                cout << "Name: " << temp->name << ", Age: " << temp->age << endl;
                temp = temp->next;
            }
        }
};
int main() {
    patientqueue pq;
    int n;
    string name;
    int age;

    cout << "Enter number of patients: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter patient name: ";
        cin >> name;
        cout << "Enter patient age: ";
        cin >> age;
        pq.enqueue(name, age);
    }

    cout << "Patient Queue:" << endl;
    pq.display();

    cout << "Dequeueing a patient..." << endl;
    pq.dequeue();

    cout << "Updated Patient Queue:" << endl;
    pq.display();

    return 0;
}