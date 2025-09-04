#include <iostream>

using namespace std;

int main() {
    cout << "--- Demonstrating 'continue' ---" << endl;
    cout << "This loop will print numbers from 1 to 5, but skip 3." << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; 
        }
        cout << i << endl;
    }

    cout << "\n--- Demonstrating 'break' ---" << endl;
    cout << "This loop will try to count to 5, but stop when it reaches 3." << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; 
        }
        cout << i << endl;
    }

    return 0;
}