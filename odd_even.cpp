#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        // Corrected "end 1" to "endl"
        cout << number << " is an even number." << endl;
    } else {
        // Corrected "end 1" to "endl"
        cout << number << " is an odd number." << endl;
    }
    return 0;
}