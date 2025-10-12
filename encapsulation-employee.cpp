#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;
public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        if (a > 18)
            age = a;
        else
            cout << "Age must be above 18." << endl;
    }
    void setSalary(double s) {
        if (s > 0)
            salary = s;
        else
            cout << "Invalid salary." << endl;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    double getSalary() {
        return salary;
    }
};

int main() {
    Employee e;
    e.setName("Sara");
    e.setAge(25);
    e.setSalary(55000);
    cout << "Name: " << e.getName() << endl;
    cout << "Age: " << e.getAge() << endl;
    cout << "Salary: " << e.getSalary() << endl;
    return 0;
}
