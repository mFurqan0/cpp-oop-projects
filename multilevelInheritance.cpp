#include <iostream>
using namespace std;


class Vehicle {
public:
    void vehicleInfo() {
        cout << "This is a Vehicle.\n";
    }
};


class Car : public Vehicle {
public:
    void carInfo() {
        cout << "This is a Car.\n";
    }
};


class ElectricCar : public Car {
public:
    void electricInfo() {
        cout << "This is an Electric Car.\n";
    }
};

int main() {
    ElectricCar e;
    e.vehicleInfo();   
    e.carInfo();       
    e.electricInfo();  
    return 0;
}
