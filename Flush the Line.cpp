#include <iostream>
#include <string>
#include <thread>   
#include <chrono>   

using namespace std;

int main() {
    string text = "Hello there!";
    
    
    for (char c : text) {
       
        cout << c << flush;
        
       
        this_thread::sleep_for(chrono::milliseconds(200));
    }
    cout << endl; 

    return 0;
}