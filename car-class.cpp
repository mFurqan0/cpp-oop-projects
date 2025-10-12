#include <iostream>
using namespace std;

class Car {
private:
    int speed;
    double fuel;
public:
    Car() {
        speed = 0;
        fuel = 50;
    }
    void accelerate() {
        if (fuel > 0) {
            speed += 10;
            fuel -= 2;
        } else {
            cout << "Out of fuel!" << endl;
        }
    }
    void brake() {
        speed -= 10;
        if (speed < 0)
            speed = 0;
    }
    void refuel(double amount) {
        if (amount > 0)
            fuel += amount;
    }
    void showStatus() {
        cout << "Speed: " << speed << " km/h, Fuel: " << fuel << " L" << endl;
    }
};

int main() {
    Car c;
    c.accelerate();
    c.showStatus();
    c.brake();
    c.showStatus();
    c.refuel(20);
    c.showStatus();
    return 0;
}
