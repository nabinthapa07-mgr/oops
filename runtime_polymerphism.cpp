//Runtime polymorphism means that the same function call can behave differently depending on the object it's pointing to,
//and this decision is made while the program is running.

#include<iostream>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};
class Dog: public Animal {
    public:
    void speak() {
        cout<<"Dog speaks"<<endl;
    }
};
class Animal1 {
public:
    virtual void speak()
    {
       cout<<"Animal1 speaks"<<endl;
    }
};
class Dog1: public Animal1 {
    public:
    void speak()  override{
        cout<<"Dog1 speaks"<<endl;
    }
};
int main() {
    // Animal a;
    // Dog d;
    // d.speak();

    // Animal1 a1;
    // Dog1 d1;
    // d1.speak();
    Animal1* a1;
     Dog1 d1;
    a1= &d1;
     a1->speak();
    return 0;
}

