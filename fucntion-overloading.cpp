#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << "Multiply two integers: " << multiply(3, 4) << endl;
    cout << "Multiply two doubles: " << multiply(2.5, 3.6) << endl;
    cout << "Multiply three integers: " << multiply(2, 3, 4) << endl;
    return 0;
}
