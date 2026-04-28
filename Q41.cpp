// write a program to define an employee class with attributes empId, name, and salary, and a method to display the employee's details.

#include <iostream>
#include <string>
using namespace std;

class Employee {
    int empId;
    string name;
    float salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee Details:\n";
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1;
    e1.input();
    e1.display();
    return 0;
}