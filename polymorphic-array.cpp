#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) {
        r = radius;
    }
    void draw() override {
        cout << "Drawing a circle on screen..." << endl;
    }
    double area() override {
        return 3.1416 * r * r;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    void draw() override {
        cout << "Drawing a rectangle shape..." << endl;
    }
    double area() override {
        return length * width;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);

    cout << "Displaying all shapes:\n";
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area = " << shapes[i]->area() << endl;
        cout << "------------------------" << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}
