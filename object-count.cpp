#include <iostream>
using namespace std;

class Serial {
    private:
        int serialNumber;
        static int count;
    public:
        Serial() {
            count ++;
            serialNumber = count;
        }

        void getSerialNumber(){
            cout << "This object's serial number is: " << serialNumber << endl;
        }
};

int Serial::count = 0;

int main() {
    Serial obj1, obj2, obj3;
    obj1.getSerialNumber();
    obj2.getSerialNumber();
    obj3.getSerialNumber();
    return 0;
}