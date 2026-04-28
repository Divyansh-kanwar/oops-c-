// write a program to create a class car with brand and prices attributes and a method to display the car's information.
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    double price;

public:
    Car(string b, double p) {
        brand = b;
        price = p;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Car car1("Toyota", 25000.0);
    Car car2("Honda", 28000.0);

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}