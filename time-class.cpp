// this program demonstrates operator overloading for a Time class
// including addition, prefix increment/decrement, and postfix increment/decrement
#include<iostream>
using namespace std;

class Time {
    int hour;
    int minute;
    int seconds;

public:
    Time() : hour(0), minute(0), seconds(0) {}

    Time(int h, int m, int s) : hour(h), minute(m), seconds(s) {}

    void DisplayTime() const {
        cout << hour << " : " << minute << " : " << seconds << endl;
    }

    Time operator+(Time t2) const {
        int s = seconds + t2.seconds;
        int m = minute + t2.minute;
        int h = hour + t2.hour;

        if (s >= 60) {
            s -= 60;
            m++;
        }

        if (m >= 60) {
            m -= 60;
            h++;
        }

        return Time(h, m, s);
    }
    // Prefix increment
    Time operator++() {
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minute++;
        }
        if (minute >= 60) {
            minute = 0;
            hour++;
        }
        return Time(hour, minute, seconds);
    }
    
    // Postfix increment 
    Time operator++(int) {
        Time temp(hour, minute, seconds); 

        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minute++;
        }
        if (minute >= 60) {
            minute = 0;
            hour++;
        }

        return temp;
    }

    // Prefix decrement 
    Time operator--() {
        if (seconds > 0) {
            seconds--;
        } else {
            seconds = 59;
            if (minute > 0) {
                minute--;
            } else {
                minute = 59;
                if (hour > 0) hour--;
            }
        }
        return Time(hour, minute, seconds);
    }

    // Postfix decrement 
    Time operator--(int) {
        Time temp(hour, minute, seconds); 

        if (seconds > 0) {
            seconds--;
        } else {
            seconds = 59;
            if (minute > 0) {
                minute--;
            } else {
                minute = 59;
                if (hour > 0) hour--;
            }
        }

        return temp;
    }
};

int main() {
    Time time1(4, 59, 59);
    Time time2(12, 56, 40);

    // Test operator+
    Time time3 = time1 + time2;

    cout << "Original Times:" << endl;
    time1.DisplayTime();
    time2.DisplayTime();
    time3.DisplayTime();

    cout << "\nTesting Increment/Decrement:" << endl;

    cout << "Prefix ++time1: ";
    (++time1).DisplayTime();

    cout << "Postfix time1++: ";
    (time1++).DisplayTime();
    cout << "After Postfix time1++: ";
    time1.DisplayTime();

    cout << "Prefix --time1: ";
    (--time1).DisplayTime();

    cout << "Postfix time1--: ";
    (time1--).DisplayTime();
    cout << "After Postfix time1--: ";
    time1.DisplayTime();

    return 0;
}
