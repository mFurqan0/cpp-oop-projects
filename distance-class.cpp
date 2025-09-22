#include<iostream>
using namespace std;

class Distance {
    private :
    int feet;
    float inches;
    
    public:
    
    Distance() : feet(0) , inches(0.0) {}
     
    Distance(int ft, float in) : feet(ft) , inches(in) {}
    
    void get_dist() {
        cout << "\nEnter Feets : ";
        cin >> feet;
        cout << "\nEnter Inches : ";
        cin >> inches;
    }
    
    void add_dist(Distance);
    
    void show_dist() {
        cout << feet << "\'" << inches << '\"';
    }
    
};
    
Distance Distance :: add_dist(Distance d2, Distance d3) {
    inches = d2.inches + d3.inches;
    feet = 0;
    if(inches >= 12.0) {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}

int main() {
    Distance dist1,dist3;
    Distance dist2(11,6.25);
    
    dist1.get_dist();
    
    dist3.add_dist(dist1,dist2);
    
    
    cout << "\nDist1 = ";
    dist1.show_dist();
    cout << "\nDist2 = ";
    dist2.show_dist();
    cout << "\nDist3 = ";
    dist3.show_dist();    
    
    return 0;
    
}