#include<iostream>
using namespace std;
class complex {
private:
    int real;
    int imaginary;
public:
    complex(int real =0,int imaginary =0){
        this->real = real;
        this->imaginary = imaginary;
    }

    complex operator+(complex c) {
        complex temp;
        temp.real =this-> real+c. real;
        temp.imaginary =this -> imaginary + c.imaginary;

        return temp;
    }
    void print()
    {
        //        cout<<real;
        //        cout<<"+";
        //        cout<<imaginary;
        //        cout<<"i";
        //

        cout<<to_string(real)+"+"+ to_string(imaginary)+"i";
    }
};

int main(){
complex c1(10,20);
complex c2(30,40);
    complex c3 = c1+c2; // c1.operator+(c2); // C1+c2
    c3.print();
    return 0;
}
