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
            cout << "Enter Date(ddmm/yy) : ";
            cin >> day >> slash >> month >> slash >> year ;
        }
        
        void showDate() {
            cout << "Date: " << day << "/" << month<< "/" << year << endl;
        }

};

int main() {
    Date d1;
    
    d1.getDate();
    d1.showDate();
    
    return 0;
}