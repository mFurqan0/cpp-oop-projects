#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int studentID;

public:
    Student(string n, int a, int id) : Person(n, a) {
        studentID = id;
    }

    void showStudent() {
        displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student s("Ali", 20, 101);
    s.showStudent();
    return 0;
}
