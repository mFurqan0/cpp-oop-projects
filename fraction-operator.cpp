#include <iostream>
#include <cstdlib>  // for exit()
#include <cmath>    // for abs()
using namespace std;

struct fraction {
    long num;  // numerator
    long den;  // denominator

    // Constructor
    fraction(long n = 0, long d = 1) {
        num = n;
        den = d;
        if (den == 0) {
            cout << "Illegal fraction: denominator cannot be 0!" << endl;
            exit(1);
        }
        simplify();
    }

    // Simplify fraction using GCD
    fraction simplify() const {
        long tnum = labs(num);
        long tden = labs(den);
        long temp;

        // Euclidean algorithm for gcd
        while (tnum != 0) {
            if (tnum < tden) {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }
            tnum = tnum - tden;
        }
        long gcd = tden;
        fraction f(num / gcd, den / gcd);

        // Keep denominator positive
        if (f.den < 0) {
            f.den = -f.den;
            f.num = -f.num;
        }
        return f;
    }

    // Operator Overloading for arithmetic
    fraction operator+(const fraction& f) const {
        return fraction(num * f.den + den * f.num, den * f.den).simplify();
    }

    fraction operator-(const fraction& f) const {
        return fraction(num * f.den - den * f.num, den * f.den).simplify();
    }

    fraction operator*(const fraction& f) const {
        return fraction(num * f.num, den * f.den).simplify();
    }

    fraction operator/(const fraction& f) const {
        return fraction(num * f.den, den * f.num).simplify();
    }

    // Comparison operators
    bool operator==(const fraction& f) const {
        fraction a = this->simplify();
        fraction b = f.simplify();
        return (a.num == b.num && a.den == b.den);
    }

    bool operator!=(const fraction& f) const {
        return !(*this == f);
    }

    // Display
    void display() const {
        cout << num << "/" << den;
    }
};

int main() {
    fraction f1, f2, result;
    char op;
    cout << "Four-function fraction calculator using operator overloading" << endl;

    while (true) {
        cout << "\nEnter first fraction (num/den): ";
        cin >> f1.num >> f1.den;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second fraction (num/den): ";
        cin >> f2.num >> f2.den;

        f1 = f1.simplify();
        f2 = f2.simplify();

        // Exit if both are 0/1
        if (f1 == fraction(0,1) && f2 == fraction(0,1)) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }

        switch (op) {
            case '+': result = f1 + f2; break;
            case '-': result = f1 - f2; break;
            case '*': result = f1 * f2; break;
            case '/': result = f1 / f2; break;
            default: cout << "Invalid operator!" << endl; continue;
        }

        cout << "Result: ";
        result.display();
        cout << endl;
    }

    return 0;
}
