// Q120.cpp: write a program to overloading < < operator to print object of a class.

#include <iostream>
using namespace std;

class student {
private:
    string name;
    int age;
public:
    student(string n, int a) : name(n), age(a) {}
    friend ostream& operator<<(ostream& os, const student& s) {
        os << "Name: " << s.name << ", Age: " << s.age;
        return os;
    }
};
int main() {
    student s1("Alice", 20);
    student s2("Bob", 22);

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}