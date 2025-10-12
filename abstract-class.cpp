#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() = 0;
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "The fan starts rotating... cool breeze coming!" << endl;
    }
};

class Light : public Appliance {
public:
    void turnOn() override {
        cout << "The light glows brightly!" << endl;
    }
};

int main() {
    Appliance* a1 = new Fan();
    Appliance* a2 = new Light();

    cout << "Turning on the appliances:\n";
    a1->turnOn();
    a2->turnOn();

    delete a1;
    delete a2;

    return 0;
}
