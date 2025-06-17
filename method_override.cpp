#include<iostream>
using namespace std;
class Base {
    public:
   virtual  void show() {
        cout << "Base class show method called" << endl;
    }
};
class Derived: public Base {
    public:
    void show() override {
        cout << "Derived class show method called" << endl;
    }
};
int main() {
    // Base b;
    Derived d;
    // b.show();
    d.show();
    return 0;
}