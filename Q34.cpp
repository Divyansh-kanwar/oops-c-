// write a program to move constructor.

#include <iostream>
using namespace std;

class Number {
private:
    int *ptr;

public:
    Number(int val) {
        ptr = new int;
        *ptr = val;
    }

    Number(Number &&n) {
        ptr = n.ptr;
        n.ptr = nullptr;
        cout << "Move Constructor Called" << endl;
    }

    void display() {
        if (ptr != nullptr)
            cout << "Value: " << *ptr << endl;
        else
            cout << "Null" << endl;
    }

    ~Number() {
        delete ptr;
    }
};

int main() {
    Number n1(10);
    Number n2 = std::move(n1);

    n2.display();
    n1.display();

    return 0;
}