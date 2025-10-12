#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overload - operator
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}
