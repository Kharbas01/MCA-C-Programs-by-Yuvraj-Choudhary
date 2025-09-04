#include <iostream>

using namespace std;

int main() {
    char branch_choice;
    int amount;

    cout << "Branch Options:\n";
    cout << "  's' for Sjatpur\n";
    cout << "  'm' for Malviya Nagar\n";
    cout << "  'c' for EriChrilline\n"; 
    cout << "Select your branch: ";
    cin >> branch_choice;

    cout << "Enter purchase amount: ";
    cin >> amount;

    
    if (branch_choice == 's' || branch_choice == 'm' || branch_choice == 'c') {
       
        if (amount > 600) {
            int discounted_amount = amount / 2;
            cout << "You are eligible for the offer!" << endl;
            cout << "You get 50% off. You now have to pay " << discounted_amount << " Rupees." << endl;
        } else {
            cout << "You are not eligible for the offer (amount must be > 600)." << endl;
            cout << "You have to pay the actual amount: " << amount << " Rupees." << endl;
        }
    } else {
        cout << "You have selected an invalid branch." << endl;
    }

    return 0;
}