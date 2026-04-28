// write a program to design a class inventory using an array . the class should be inserted item ,delete item , display item and calculate total price of items.

#include <iostream>
using namespace std;

class Inventory {
    int n;
    float *prices;
    
public:
    Inventory(int size) {
        n = size;
        prices = new float[n];
    }
    
    void insertItem(int index, float price) {
        if(index >= 0 && index < n) {
            prices[index] = price;
        }
    }
    
    void deleteItem(int index) {
        if(index >= 0 && index < n) {
            prices[index] = 0;
        }
    }
    
    void displayItems() {
        for(int i = 0; i < n; i++) {
            cout << "Item " << i + 1 << ": $" << prices[i] << endl;
        }
    }
    
    float calculateTotalPrice() {
        float total = 0;
        for(int i = 0; i < n; i++) {
            total += prices[i];
        }
        return total;
    }
};
