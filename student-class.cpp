#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;
public:
    void setName(string n) {
        name = n;
    }
    void setMarks(int m) {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks! Must be between 0 and 100." << endl;
    }
    string getName() {
        return name;
    }
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;
    s.setName("Ali");
    s.setMarks(95);
    cout << "Name: " << s.getName() << endl;
    cout << "Marks: " << s.getMarks() << endl;
    return 0;
}
