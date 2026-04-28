// write a program basic object oriented programming concepts in C++.

#include <iostream>
using namespace std;

class Person {

    private:
    string name;
    int age;

    public:

    void getInput() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

int main() {
    Person p;
    p.getInput();
    p.displayInfo();
    return 0;
}