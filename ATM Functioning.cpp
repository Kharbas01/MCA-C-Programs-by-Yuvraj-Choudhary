#include <iostream>
#include <string> 
using namespace std;

class ATM {
private: 
    string accountHolderName;
    long accountNumber; 
    double balance;

public:
  
    void setupAccount(string name, long accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

   
    void showDetails() {
        cout << "------------------------\n";
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "------------------------\n";
    }

   
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "SUCCESS: $" << amount << " deposited." << endl;
        } else {
            cout << "ERROR: Deposit amount must be positive." << endl;
        }
    }

   
    void withdraw(double amount) {
        
        if (amount > 0 && amount <= balance) {
            balance -= amount; 
            cout << "SUCCESS: $" << amount << " withdrawn." << endl;
        } else {
            cout << "ERROR: Invalid amount or insufficient balance." << endl;
        }
    }
};

int main() {
    ATM myAccount; 

   
    myAccount.setupAccount("Yuvraj", 32145687L, 50000.00);

    cout << "Initial Account Details:" << endl;
    myAccount.showDetails();

    cout << "\nDepositing $2000..." << endl;
    myAccount.deposit(2000);

    cout << "\nWithdrawing $10000..." << endl;
    myAccount.withdraw(10000);
    
    cout << "\nAttempting to withdraw $50000 (insufficient)..." << endl;
    myAccount.withdraw(50000);

    cout << "\nFinal Account Details:" << endl;
    myAccount.showDetails();

    return 0;
}