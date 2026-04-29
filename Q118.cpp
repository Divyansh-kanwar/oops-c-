// Q118.cpp: write a program to overloading the + operator to add two complex numbers.

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;    
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 4.5);

    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}