#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Deposit amount must be positive." << endl;
    }
    void withdraw(double amount) {
        if (amount <= balance && amount > 0)
            balance -= amount;
        else
            cout << "Insufficient balance or invalid amount." << endl;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(300);
    cout << "Current balance: " << acc.getBalance() << endl;
    return 0;
}
