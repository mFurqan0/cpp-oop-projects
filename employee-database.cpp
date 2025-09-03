#include<iostream>
using namespace std;

class Employee {
    private:
        int employeeNumber;
        float employeeCompensation;
    
    public:
        void setData() {
            cout << "Enter Employee Number: ";
            cin >> employeeNumber;
            cout << "Enter Employee Compensation: ";
            cin >> employeeCompensation;
            
        }
           
        void showData() {
            cout << "Employee Number: " << employeeNumber << endl;
            cout << "Compensation: " << employeeCompensation << endl;
        } 
        
};

int main() {
    Employee e[3];
    
    for(int i=0;i<3;i++) {
        cout << "Enter Details for Employee " << i+1 << ":"<<endl;
        e[i].setData();
    }
    
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        e[i].showData();
    }  
    return 0;
}