#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }
    Number operator++() {
        return Number(++value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(15);
    Number n2 = ++n1;

    n2.display();
    return 0;
}