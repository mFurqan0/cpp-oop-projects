#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;

public:
    Car(string b, string m) {
        brand = b;
        model = m;
    }

    
    Car(const Car &c) {
        brand = c.brand;
        model = c.model;
    }

    void display() {
        cout << "Car: " << brand << " " << model << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla");
    Car car2 = car1;   

    cout << "Original Car: ";
    car1.display();

    cout << "Copied Car: ";
    car2.display();

    return 0;
}
