#include <iostream>
using namespace std;

int main() {
    
    int a = 10;
    double b = a; 
    cout << "Implicit conversion (int to double): " << b << endl;

    
    double pi = 3.14159;
    int x = (int)pi; 
    cout << "Explicit conversion (double to int): " << x << endl;
    
   
    int y = static_cast<int>(pi);
    cout << "Explicit conversion using static_cast: " << y << endl;

    return 0;
}