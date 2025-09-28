#include <iostream>
using namespace std;


class Teacher {
protected:
    string subject;

public:
    Teacher(string sub) {
        subject = sub;
    }
};


class Researcher {
protected:
    string field;

public:
    Researcher(string f) {
        field = f;
    }
};


class Professor : public Teacher, public Researcher {
public:
    Professor(string sub, string f) : Teacher(sub), Researcher(f) {}

    void display() {
        cout << "Professor Details:\nSubject: " << subject 
             << "\nResearch Field: " << field << endl;
    }
};

int main() {
    Professor p("Computer Science", "Artificial Intelligence");
    p.display();
    return 0;
}
