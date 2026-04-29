// Q112.cpp: write a program to demonstrate multiple inheritance in C++

#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "This is the first base class." << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "This is the second base class." << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "This is the derived class." << endl;
    }
};

int main() {
    Derived obj;
    obj.display1();
    obj.display2();
    obj.show();

    return 0;
}