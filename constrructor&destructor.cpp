#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        cout << "Student created: " << name << " (Roll: " << rollNumber << ")\n";
    }

    // Destructor
    ~Student() {
        cout << "Destructor called: Student " << name << " is destroyed.\n";
    }
};

int main() {
    Student s1("Ali", 101);
    Student s2("Sara", 102);

    return 0;
}
