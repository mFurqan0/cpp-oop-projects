#include <iostream>
#include <cstdlib>   // for exit()
#include <cmath>     // for labs()
using namespace std;

class Fraction {
private:
    long num;   // numerator
    long den;   // denominator

public:
    // default + parameterized constructor
    Fraction(long n = 0, long d = 1) {
        num = n;
        if (d == 0) {
            cout << "Illegal fraction: division by 0\n";
            exit(1);
        }
        den = d;
        lowterms();
    }

    // input
    void getFraction() {
        char slash;
        cout << "Enter fraction (n/d): ";
        cin >> num >> slash >> den;
        if (den == 0) {
            cout << "Illegal fraction: division by 0\n";
            exit(1);
        }
        lowterms();
    }

    // output
    void showFraction() const {
        cout << num << "/" << den;
    }

    // arithmetic operations
    Fraction add(Fraction f) {
        return Fraction(num * f.den + den * f.num, den * f.den);
    }

    Fraction sub(Fraction f) {
        return Fraction(num * f.den - den * f.num, den * f.den);
    }

    Fraction mul(Fraction f) {
        return Fraction(num * f.num, den * f.den);
    }

    Fraction div(Fraction f) {
        return Fraction(num * f.den, den * f.num);
    }

    // reduce fraction to lowest terms
    void lowterms() {
        long tnum = labs(num);
        long tden = labs(den);
        long temp, gcd;

        if (tden == 0) {
            cout << "Illegal fraction: division by 0\n";
            exit(1);
        } else if (tnum == 0) {
            num = 0; den = 1;
            return;
        }

        while (tnum != 0) {
            if (tnum < tden) {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }
            tnum = tnum - tden;
        }
        gcd = tden;
        num = num / gcd;
        den = den / gcd;
    }
};

int main() {
    Fraction f1, f2, result;
    char op, cont;

    do {
        f1.getFraction();
        cout << "Enter operation (+, -, *, /): ";
        cin >> op;
        f2.getFraction();

        switch (op) {
            case '+': result = f1.add(f2); break;
            case '-': result = f1.sub(f2); break;
            case '*': result = f1.mul(f2); break;
            case '/': result = f1.div(f2); break;
            default: cout << "Unknown operator"; continue;
        }

        cout << "Result = ";
        result.showFraction();
        cout << endl;

        cout << "Continue? (y/n): ";
        cin >> cont;
    } while (cont == 'y');

    return 0;
}
