// Q115.cpp: write a program to demonstrate hybrid inheritance in C++

#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is class A." << endl;
    }
};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {

public:
    void displayD() {
        cout << "This is class D." << endl;
    }
};
int main() {
    D obj;
    obj.displayA(); 
    obj.displayD(); 

    return 0;
}
