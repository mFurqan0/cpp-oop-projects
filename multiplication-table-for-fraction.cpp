#include <iostream>
using namespace std;

// Reuse Fraction class from above
// (copy Fraction definition here)

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
