#include <iostream>
using namespace std;

class Serial {
private:
    static int count;   // shared among all objects
    int serialNumber;   // unique for each object

public:
    Serial() {
        count++;
        serialNumber = count;
    }

    void showSerial() {
        cout << "I am object number " << serialNumber << endl;
    }
};

// define static variable
int Serial::count = 0;

int main() {
    Serial s1, s2, s3;

    s1.showSerial();
    s2.showSerial();
    s3.showSerial();

    return 0;
}
