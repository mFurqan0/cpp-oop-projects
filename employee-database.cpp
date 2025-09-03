#include<iostream>
using namespace std;

class Date {
    private:
        int year;
        int month;
        int day;

    public:
        void getDate() {
        char slash;
            cout << "Enter Employee Hire Date (DD MM YYYY): ";
            cin >> day >> slash >>month >>slash>> year;
        }
        void showDate() {
            cout << day << "/" << month << "/" << year;
        }
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class Employee {
    private:
        int employeeNumber;
        float employeeCompensation;
        Date hiredate;
        etype empType;

    public:
    // function to input employee data
        void setEmployee() {

            char type;

            // taking input for employee number & compensation
            cout << "Enter employeeNumber: ";
            cin >> employeeNumber;
            cout << "Enter employee compensation: ";
            cin >> employeeCompensation;
        
            // calling function of class Date to input hire date 
            hiredate.getDate();

            cout << " Enter Employee Type (l = laborer, s = secretary, m = manager, a = accountant, e = executive, r = researcher): ";
            cin >> type;

            switch(type) {
                case 'l': empType = laborer; break;
                case 's': empType = secretary; break;
                case 'm': empType = manager; break;
                case 'a': empType = accountant; break;
                case 'e': empType = executive; break;
                case 'r': empType = researcher; break;
                }
                cout <<endl;
            }   

        void getEmployee() {
            cout << "Employee Number: " << employeeNumber <<endl;
            cout << "Employee compensation: " << employeeCompensation << endl;

            hiredate.showDate();
            cout << endl;

            cout << "Employee Type: ";
            switch(empType) {
                case laborer: cout << "Laborer"; break;
                case secretary: cout << "Secretary"; break;
                case manager: cout << "Manager"; break;
                case accountant: cout << "Accountant"; break;
                case executive: cout << "Executive"; break;
                case researcher: cout << "Researcher"; break;
                }
            cout <<endl;
            cout <<endl;
            }  
};


int main() {
    Employee e[3];

    for(int i=0; i<3; i++) {
        cout << "******Enter employee " << i+1 << "data*******" <<endl;
        e[i].setEmployee();
    }

    for(int i=0; i<3; i++) {
        cout << "*****Employee No." << i+1 << "data******"<<endl<<endl;
        e[i].getEmployee();
    }

    return 0;
}