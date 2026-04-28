// write a program to define an inventory class with attributes n (number of items) and price (array of item prices), and methods to input the inventory details, calculate the total price, and display the inventory information.

#include <iostream>
using namespace std;

class Inventory {
    int n;
    float price[100];

public:
    void input() {
        cout << "Enter number of items: ";
        cin >> n;

        cout << "Enter prices:\n";
        for(int i = 0; i < n; i++) {
            cin >> price[i];
        }
    }

    float totalPrice() {
        float sum = 0;
        for(int i = 0; i < n; i++) {
            sum += price[i];
        }
        return sum;
    }

    void display() {
        cout << "Prices are:\n";
        for(int i = 0; i < n; i++) {
            cout << price[i] << " ";
        }
        cout << "\nTotal Price = " << totalPrice() << endl;
    }
};

int main() {
    Inventory obj;
    obj.input();
    obj.display();
    return 0;
}