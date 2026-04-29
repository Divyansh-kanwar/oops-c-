//Q113.cpp: write a program to demonstrate multilevel inheritance in C++

#include <iostream>
using namespace std;

class Base {
public:

    void display() {
        cout << "This is the base class." << endl;
    }
};
class Intermediate : public Base {
public:
    void show() {
        cout << "This is the intermediate class." << endl;
    }
};
class Derived : public Intermediate {
public:
    void displayDerived() {
        cout << "This is the derived class." << endl;
    }
};
int main() {
    Derived obj;
    obj.display(); 
    obj.show();    
    obj.displayDerived(); 

    return 0;
}
