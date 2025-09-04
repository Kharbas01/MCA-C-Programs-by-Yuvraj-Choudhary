#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int dice_roll;
    char choice;

    srand(time(0));

    do {
        
        dice_roll = (rand() % 6) + 1;

        cout << "The dice roll is: " << dice_roll << endl;
        cout << "Play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); 

    cout << "Thank you for playing!" << endl;
    return 0; }