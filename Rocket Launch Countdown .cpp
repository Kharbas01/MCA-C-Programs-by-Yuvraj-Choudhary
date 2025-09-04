#include <iostream>
#include <thread>   
#include <chrono>   

using namespace std;

int main() {
    cout << "Preparing Rocket Launcher..." << endl;
    cout << "Press Enter for ignition to get started: ";
    cin.get(); 

    cout << "Ignition Started!" << endl;
    cout << "Press Enter for countdown to begin: ";
    cin.get();

    for (int i = 5; i > 0; i--) {
        cout << i << "..." << endl;
        
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "Rocket Launched Successfully!" << endl;
    return 0;
}