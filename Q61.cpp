// write a program to design a class inventory using an array to store the prices of items, and a method to calculate the total price of all items.

#include <iostream>
using namespace std;

class Inventory {
 private:
 int item [100];
 int size;
 int capacity;
public:
    Inventory(int cap) {
        capacity = cap;
        size = 0;
    }
    
    void addItem(int price) {
        if(size < capacity) {
            item[size] = price;
            size++;
        }
    }
    
    int totalPrice() {
        int sum = 0;
        for(int i = 0; i < size; i++) {
            sum += item[i];
        }
        return sum;
    }
void display() {
        cout << "Item prices:\n";
        for(int i = 0; i < size; i++) {
            cout << item[i] << " ";
        }
        cout << "\nTotal Price: " << totalPrice() << endl;
    }
};