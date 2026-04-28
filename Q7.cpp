// Q7.CPP write a program to calculate the area of a rectangle.

#include <iostream>
using namespace std;

int main() {

    double length, width;

    cout << "Enter the length and width of the rectangle: ";

    cin >> length >> width;

    double area = length * width;

    cout << "Area of the rectangle: " << area << endl;

    return 0;
    
}