//Create a class BankAccount with deposit and withdraw functions.
#include <iostream>
using namespace std;

class BankAccount{
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:

    void createAccount(string name, int accNo, double initialBalance){
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount){
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount){
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    void display(){
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main(){
    BankAccount acc;
    string name;
    int accNo;
    double initialBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    acc.createAccount(name, accNo, initialBalance);

    acc.deposit(500);
    acc.withdraw(200);
    acc.display();

    return 0;
}
