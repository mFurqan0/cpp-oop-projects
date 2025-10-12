#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is driving on the road" << endl;
    }
};

class Bike : public Vehicle {
public:
    void move() override {
        cout << "Bike is running on two wheels" << endl;
    }
};

int main() {
    Vehicle* v;

    Car c;
    Bike b;

    v = &c;
    v->move(); // Calls Car’s move()

    v = &b;
    v->move(); // Calls Bike’s move()

    return 0;
}
