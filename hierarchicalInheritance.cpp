#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {   // virtual for polymorphism
        cout << "Area of Shape (base class).\n";
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = " << 3.1416 * radius * radius << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    int choice;
    cout << "Choose Shape:\n1. Circle\n2. Rectangle\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        Circle c(r);
        c.area();
    } else if (choice == 2) {
        float l, w;
        cout << "Enter length and width: ";
        cin >> l >> w;
        Rectangle r(l, w);
        r.area();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
