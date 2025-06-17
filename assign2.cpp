#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0) {
        this->real = real;
        this->imaginary = imaginary;
    }
    friend Complex operator+(Complex c1, Complex c2);

    void print() {
        cout << real << "+" << imaginary << "i" << endl;
    }
};
Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}
int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}