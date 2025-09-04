#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        // Corrected "end 1" to "endl"
        cout << num1 << " is the largest." << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        // Corrected "end 1" to "endl"
        cout << num2 << " is the largest." << endl;
    } else {
        // Corrected "end 1" to "endl"
        cout << num3 << " is the largest." << endl;
    }
    return 0;
}