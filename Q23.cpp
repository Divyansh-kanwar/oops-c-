// write a program to add two numbers using a function that return a value.

#include <iostream>
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}
int main() {

    int x = 10 , y = 20;
    int result = add(x, y);

    result = add(x, y);
    cout << "The sum of " << x << " and " << y << " is: " << result << endl;

    return 0;
    
}