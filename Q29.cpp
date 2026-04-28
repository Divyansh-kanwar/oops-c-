// write a program to polymorphism in c++.

#include <iostream>
using namespace std;

class Base {
public:

    virtual void display() {
        cout << "This is the base class." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is the derived class." << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;
    basePtr = &d;

    basePtr->display(); 

    return 0;
}