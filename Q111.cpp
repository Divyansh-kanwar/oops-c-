// Q111.cpp: write a program to demonstrate single inheritance in C++

#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "This is the base class." << endl;
    }
};
class Derived : public Base {
public:
    void show() {
        cout << "This is the derived class." << endl;
    }
};
int main() {
    Derived obj;
    obj.display(); 
    obj.show();    

    return 0;
}