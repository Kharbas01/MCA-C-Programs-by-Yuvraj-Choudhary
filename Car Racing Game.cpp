#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;


void drawCar(char carName, int position) {
    for (int i = 0; i < position; ++i) {
        cout << " ";
    }
    cout << carName << endl;
}

int main() {
    srand(time(0));

    int posA = 0;
    int posB = 0;
    const int trackLength = 50; 

    cout << "Race Starting in 3... 2... 1... GO!" << endl;
    this_thread::sleep_for(chrono::seconds(1));

    for (int round = 1; round <= 15; ++round) {
       
        system("cls"); 
        
        cout << "Round " << round << endl;
        
        
        posA += (rand() % 3) - 1;
        posB += (rand() % 3) - 1;

       
        if (posA < 0) posA = 0;
        if (posB < 0) posB = 0;

        drawCar('A', posA);
        drawCar('B', posB);
        cout << "------------------------------------------" << endl;


       
        this_thread::sleep_for(chrono::milliseconds(300)); 
    }

   
    cout << "\n--- RACE OVER ---\n";
    cout << "Car A finished at position: " << posA << endl;
    cout << "Car B finished at position: " << posB << endl;

    if (posA > posB) {
        cout << "Car A WINS!" << endl;
    } else if (posB > posA) {
        cout << "Car B WINS!" << endl;
    } else {
        cout << "It's a TIE!" << endl;
    }

    return 0;
}
