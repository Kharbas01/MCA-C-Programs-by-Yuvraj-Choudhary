#include <iostream> 
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your Name: ";
    cin >> name;

    if (name.length() % 2 == 0) {
        cout << name << ", you are a Good Coder." << endl;
    } else {
        cout << name << ", you need to Practice." << endl;
    }
    return 0;
}