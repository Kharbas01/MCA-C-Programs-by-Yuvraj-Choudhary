#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        cout << "[";
        
        for (int j = 0; j < i; ++j) {
            cout << "=";
        }
        cout << ">"; 
        
        for (int j = i; j < 5; ++j) {
            cout << " ";
        }
        
        cout << "] " << i * 20 << "%" << "\r"; 
        cout.flush(); 
        
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\nDownloading Complete!" << endl;
    return 0;
}