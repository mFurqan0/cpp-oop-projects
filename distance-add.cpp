//This code shows how objects can be passed by value (copied) or by reference (no copy, direct access) in C++.
// It uses a Distance class with methods for setting, displaying, and adding distances, demonstrating concepts of encapsulation, references, and memory efficiency.

#include<iostream>
using namespace std;

class Distance {
    int feet;
    float inches;
    
    public:
    
        Distance () : feet(0) , inches (0.0) {}
        
        Distance (int ft , float in) : feet(ft) , inches(in) {}
        
        void getDist() {
            
            cout << "Enter feet : "  ; cin >> feet;
            cout << "Enter inches : "  ; cin >> inches;            
        }
        
        void showDist() const {
            cout << feet <<  " feet" << " and " << inches << " inches" <<endl;
        }
        
        Distance add_dist(const Distance) const ;
};

Distance Distance :: add_dist(const Distance d2) const {
    Distance temp;
    
    temp.inches = inches + d2.inches;
    if(temp.inches > 12 ) {
        temp.feet = 1;
        temp.inches -= 12;
        
    }
    
    temp.feet += feet + d2.feet;
    
    return temp;
}

int main() {
    Distance dist1;
    
    dist1.getDist();
    
    Distance dist2(6,4.6);
    
    Distance dist3;
    
    dist3 = dist1.add_dist(dist2) ;
    
    cout << "\n****DIST 1****\n";
    dist1.showDist();
    cout << "\n****DIST 2****\n";
    dist2.showDist();
    cout << "\n****DIST 3****\n";
    dist3.showDist();
    
    return 0;
} 