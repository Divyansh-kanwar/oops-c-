// write a program to array of objects in c++.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double marks;

public:
    Student(string n, int roll, double m) {
        name = n;
        rollNumber = roll;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s[3] = {
        Student("Alice", 1, 85.5),
        Student("Bob", 2, 92.0),
        Student("Charlie", 3, 78.5)
    };

    for (int i = 0; i < 3; i++) {
        s[i].display();
        cout << endl;
    }

    return 0;
}