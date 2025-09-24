#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

public:
    // Constructor to initialize num and den
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
    }

    void getFraction() {
        char slash;
        cout << "Enter fraction (a/b): ";
        cin >> num >> slash >> den;
    }

    void showFraction() {
        cout << num << "/" << den;
    }

    Fraction add(Fraction f) {
        Fraction temp;
        temp.num = num * f.den + f.num * den;
        temp.den = den * f.den;
        return temp;
    }

    Fraction mul(Fraction f) {
        Fraction temp;
        temp.num = num * f.num;
        temp.den = den * f.den;
        return temp;
    }
};

int main() {
    int denom;
    cout << "Enter denominator: ";
    cin >> denom;

    // fractions from 1/denom to (denom-1)/denom
    for (int i = 1; i < denom; i++) {
        for (int j = 1; j < denom; j++) {
            Fraction f1(i, denom);
            Fraction f2(j, denom);
            Fraction result = f1.mul(f2);

            f1.showFraction(); cout << " * ";
            f2.showFraction(); cout << " = ";
            result.showFraction();
            cout << endl;
        }
    }

    return 0;
}
