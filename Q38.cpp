// write a program to create a class to manage inventory prices accept input through a constructor and print all prices and their sum

#include <iostream>
using namespace std;

class Inventory {
    int n;
    float *prices;

public:
    Inventory(int size) {
        n = size;
        prices = new float[n];
        cout << "Enter " << n << " prices:\n";
        for(int i = 0; i < n; i++) {
            cin >> prices[i];
        }
    }

    void display() {
        float sum = 0;
        cout << "Prices are:\n";
        for(int i = 0; i < n; i++) {
            cout << prices[i] << " ";
            sum += prices[i];
        }
        cout << "\nTotal sum = " << sum << endl;
    }

    ~Inventory() {
        delete[] prices;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Inventory obj(n);
    obj.display();

    return 0;
}