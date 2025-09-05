#include <iostream>
#include <string>
#include <thread>
#include <chrono>


using namespace std;


void clearScreen() {
    
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    int position = 0;
    int direction = 1; 
    const int width = 50; 

    
    while (true) {
      
        clearScreen();

       
        for (int i = 0; i < position; ++i) {
            cout << " ";
        }
        cout << "o" << endl; 
        
        position += direction;

        
        if (position >= width || position <= 0) {
            direction *= -1;
        }

       
        this_thread::sleep_for(chrono::milliseconds(40));
    }

    return 0;
}