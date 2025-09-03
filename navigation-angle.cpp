#include<iostream>
using namespace std;

class angle {
    private:
        int degree;
        float minutes;
        char direction;
    
    public:
        
        angle(int d=0, float m=0.0, char dir='N') {
            degree = d;
            minutes = m;
            direction = dir;
        }
        
        void setAngle() {
            cout << "Enter the Degree(0-180) : ";
            cin >> degree;
            cout << "Enter the Minute(0-90): ";
            cin >> minutes;
            cout << "Enter the Direction(N,S,E,W) : ";
            cin >> direction;
            
            cout <<endl;
        }
        
        void getAngle() {
            cout << "The Angle is " << degree << "\u00B0" << minutes <<"' "<<direction<<endl;
        }
};


int main() {
    
    angle a1(149, 34.8, 'W');
    angle a2(17, 31.5, 'S');
    
    // Loop to input new values
    angle userAngle;
    char choice;
    do {
        userAngle.setAngle();
        cout << "You entered: ";
        userAngle.getAngle();
        cout << endl;

        cout << "Do you want to enter another angle? (y/n): ";
        cin >> choice;
        cout <<endl;
    } while(choice == 'y' || choice == 'Y');

    return 0;
    
}