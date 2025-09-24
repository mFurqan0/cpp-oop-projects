#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    void get_dist() {
        cout << "\nEnter Feet : ";
        cin >> feet;
        cout << "\nEnter Inches : ";
        cin >> inches;
    }

    Distance add_dist(Distance d2); // ✅ only one parameter

    void show_dist() {
        cout << feet << "\'" << inches << '\"';
    }
};

Distance Distance::add_dist(Distance d2) {
    Distance temp;   // create a temp object to store result
    temp.inches = inches + d2.inches;
    temp.feet = 0;

    if (temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet++;
    }

    temp.feet += feet + d2.feet;
    return temp;   // ✅ must return Distance
}

int main() {
    Distance dist1, dist2(11, 6.25), dist3;

    dist1.get_dist();

    dist3 = dist1.add_dist(dist2);  // ✅ assign returned object

    cout << "\nDist1 = ";
    dist1.show_dist();
    cout << "\nDist2 = ";
    dist2.show_dist();
    cout << "\nDist3 = ";
    dist3.show_dist();

    return 0;
}
