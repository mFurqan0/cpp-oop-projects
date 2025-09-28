#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // Parameterized constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    float area() {
        return length * width;
    }
};

int main() {
    Rectangle rect(10.5, 5.2);
    cout << "Area of rectangle = " << rect.area() << endl;

    return 0;
}
