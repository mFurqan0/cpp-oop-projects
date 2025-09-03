#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    Angle(int d = 0, float m = 0.0, char dir = 'N') {
        degrees = d;
        minutes = m;
        direction = dir;
    }

    void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N, S, E, W): ";
        cin >> direction;
    }

    void showAngle() const {
        cout << degrees << "\xF8" << minutes << "' " << direction;
    }
};

class Ship {
private:
    static int count;   // shared counter
    int shipNumber;     // unique ship number
    Angle latitude, longitude;

public:
    Ship() {
        count++;
        shipNumber = count;
    }

    void getPosition() {
        cout << "Enter latitude:\n";
        latitude.getAngle();
        cout << "Enter longitude:\n";
        longitude.getAngle();
    }

    void showPosition() {
        cout << "Ship number " << shipNumber << " position: ";
        latitude.showAngle();
        cout << ", ";
        longitude.showAngle();
        cout << endl;
    }
};

// initialize static variable
int Ship::count = 0;

int main() {
    Ship s1, s2, s3;

    cout << "Enter details for Ship 1:\n";
    s1.getPosition();
    cout << "Enter details for Ship 2:\n";
    s2.getPosition();
    cout << "Enter details for Ship 3:\n";
    s3.getPosition();

    cout << "\nShip positions:\n";
    s1.showPosition();
    s2.showPosition();
    s3.showPosition();

    return 0;
}
