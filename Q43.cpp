//write a progran to demonstrate the deafault constructor in c++.

#include <iostream>
using namespace std;

class Employee {
    int empId;
    string name;
    float salary;
public:
    Employee() {
        empId = 0;
        name = "Unknown";
        salary = 0.0;
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
    e1.display();
    return 0;
}
