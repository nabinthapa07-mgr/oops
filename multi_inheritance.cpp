#include<iostream>
using namespace std;
class Parent {
    public:
    Parent() {
        cout << "Parent class constructor called" << endl;
    }
};
class parent2
{
    public:
    parent2() {
        cout << "Parent2 class constructor called" << endl;
    }
};
class parent3 {
    public:
    parent3() {
        cout << "Parent3 class constructor called" << endl;
    }
};
class child: Parent, parent3, parent2 {

};

int main() {
    child obj;
    Parent p;
    parent2 p2;
    parent3 p3;
    return 0;
}