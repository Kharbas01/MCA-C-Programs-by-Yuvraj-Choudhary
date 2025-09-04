#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int id;
    string name;

public:
    
    Student(int studentId, string studentName) {
        id = studentId;
        name = studentName;
        cout << "Object for " << name << " created in memory." << endl;
    }

    void showDetails() {
        cout << "  ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    cout << "--- Demonstrating Stack Memory Allocation ---" << endl;
    cout << "Memory for these objects is allocated on the 'stack' automatically." << endl;

   
    Student s1(1, "John");
    Student s2(2, "Smith");
    Student s3(3, "Charlie");

    cout << "\nDisplaying details from the created objects:" << endl;
    s1.showDetails();
    s2.showDetails();
    s3.showDetails();
    
    cout << "\nProgram ending. Memory on the stack will be automatically freed." << endl;
    return 0;
}