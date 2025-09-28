#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double bal) {
        accountHolder = name;
        balance = bal;
        cout << "Account created for " << accountHolder 
             << " with balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account Closed: " << accountHolder << endl;
    }
};

int main() {
    BankAccount acc1("Ahmed", 5000.0);
    BankAccount acc2("Fatima", 10000.0);

    return 0;
}
