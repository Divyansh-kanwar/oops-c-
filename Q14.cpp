//Q14.cpp define a class student with data members name roll number and marks.create an object of the class and assign values to the data members and display them.

#include <iostream>
using namespace std;

class Student {

    public:
        string name;
        int rollNumber;
        float marks;

        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {

    Student student1;

    cout << "Enter name: ";
    getline(cin, student1.name);

    cout << "Enter roll number: ";
    cin >> student1.rollNumber;

    cout << "Enter marks: ";
    cin >> student1.marks;

    cout << "\nStudent Details:" << endl;
    student1.display();

    return 0;
    
}