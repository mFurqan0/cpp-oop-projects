#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

public:
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
};

int main() {
    Fraction f1, f2, sum;
    char choice;

    do {
        f1.getFraction();
        f2.getFraction();

        sum = f1.add(f2);

        cout << "Sum = ";
        sum.showFraction();
        cout << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
