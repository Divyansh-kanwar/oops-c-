// write a program to parameterized constructor in c++.

#include <iostream>
#include <string>
using namespace std;    

class Employee {
    int empId;
    string name;
    float salary;

public:
    Employee(int id, string n, float s) {
        empId = id;
        name = n;
        salary = s;
    }

    void display() {
        cout << "\nEmployee Details:\n";
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    Employee e1(1, "John Doe", 50000.0);
    e1.display();
    return 0;
}