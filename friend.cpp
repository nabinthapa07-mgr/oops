#include<iostream>
using namespace std;
class A {
private:
    int value;

public:
    A(int v) {
        value = v;
    }
A operator++() {
        return A(++value);
    }
    void display () {
        cout << "Value: " << value << endl;
    }
};
int main() {
    A a(8);
    ++a;
    a.display();

    return 0;
}
