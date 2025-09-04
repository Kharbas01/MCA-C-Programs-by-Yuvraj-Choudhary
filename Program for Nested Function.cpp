#include <iostream>

using namespace std;

class Demo {
private: 
    int x;

   
    void square() {
        cout << "Square of x is: " << (x * x) << endl;
    }

public:
   
    void processInput(int n) {
        x = n;
        
        square();
    }
};

int main() {
   
    Demo d1;
    
   
    d1.processInput(5);
    
    return 0;
}