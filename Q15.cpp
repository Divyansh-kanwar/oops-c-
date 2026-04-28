// write a program to add two number using class and object.

#include <iostream>
using namespace std;

class Adder {

    private:
    int num1, num2;

    public:

    void getInput() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

void displaySum() {
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;
}

};
int main() {

    Adder adder;

    adder.getInput();
    adder.displaySum();

    return 0;
    
}