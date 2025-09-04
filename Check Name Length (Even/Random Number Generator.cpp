#include <iostream>
#include <cstdlib> 
#include <ctime>   


using namespace std;

int main() {
   
    srand(time(0));

   
    int random_num = rand() % 7;

   
    int OTP = 100000 + rand() % 900000;

    cout << "Random Number between (0 to 6): " << random_num << endl;
    cout << "OTP: " << OTP << endl;

    return 0;
}