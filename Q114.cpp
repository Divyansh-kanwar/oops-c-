// Q114.cpp: write a program to demonstrate hierarchical inheritance in C++

#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "This is the base class." << endl;
    }
};

class Derived1 : public Base {
public:
    void show1() {
        cout << "This is the first derived class." << endl;
    }
};

class Derived2 : public Base {
public:
    void show2() {
        cout << "This is the second derived class." << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;

    obj1.display();
    obj1.show1();

    obj2.display();
    obj2.show2();

    return 0;
}
