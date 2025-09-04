#include <iostream>
#include <string> // It's good practice to include the string header

using namespace std;

class ATM {
private: // Data members should ideally be private to protect them
    string accountHolderName;
    long accountNumber; // Account numbers can be long
    double balance;

public:
    // This function initializes the account details
    void setupAccount(string name, long accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Displays the current account details
    void showDetails() {
        cout << "------------------------\n";
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "------------------------\n";
    }

    // Adds an amount to the balance
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "SUCCESS: $" << amount << " deposited." << endl;
        } else {
            cout << "ERROR: Deposit amount must be positive." << endl;
        }
    }

    // Subtracts an amount from the balance if sufficient funds exist
    void withdraw(double amount) {
        // Corrected the condition: use <= for comparison and check for a positive amount
        if (amount > 0 && amount <= balance) {
            balance -= amount; // Use -= for subtraction assignment
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