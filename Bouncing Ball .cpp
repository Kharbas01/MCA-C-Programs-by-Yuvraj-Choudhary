#include <iostream>
#include <string>
#include <thread>
#include <chrono>

// This line makes it so you don't have to type std::
using namespace std;

// Function to clear the console screen
void clearScreen() {
    // Use "cls" for Windows and "clear" for Linux/macOS
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    int position = 0;
    int direction = 1; // 1 means moving right, -1 means moving left
    const int width = 50; // How wide the bouncing area is

    // An infinite loop to keep the animation running
    while (true) {
        // Clear the screen for the new frame
        clearScreen();

        // This loop prints spaces to position the ball
        for (int i = 0; i < position; ++i) {
            cout << " ";
        }
        cout << "o" << endl; // Print the ball

        // Move the ball for the next frame
        position += direction;

        // If the ball hits an edge, reverse its direction
        if (position >= width || position <= 0) {
            direction *= -1;
        }

        // Pause briefly to make the animation visible
        this_thread::sleep_for(chrono::milliseconds(40));
    }

    return 0;
}