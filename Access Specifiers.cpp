#include <iostream>
#include <string>

using namespace std;

class Student
{
    // By default, members of a class are 'private'.
    // It's good practice to explicitly state it.
private:
    string name;
    int marks;
    int attendance; // As a percentage

public:
    // This is the PUBLIC interface. These functions can be called from main().
    void setupStudent(string studentName, int studentMarks, int studentAttendance)
    {
        name = studentName;
        marks = studentMarks;
        attendance = studentAttendance;
    }

    void showDetails()
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << "/100" << endl;
        cout << "Attendance: " << attendance << "%" << endl;
    }

    void checkPassingEligibility()
    {
        // This public method can access the private 'marks' and 'attendance'
        if (marks >= 40 && attendance > 75)
        {
            cout << name << " is eligible to pass." << endl;
        }
        else
        {
            cout << name << " is NOT eligible to pass." << endl;
        }
    }
};

int main()
{

    Student student1;

    student1.setupStudent("Rohan", 85, 90);
    student1.showDetails();
    student1.checkPassingEligibility();

    cout << "\n"; 

    Student student2;
    student2.setupStudent("Priya", 70, 70);
    student2.showDetails();
    student2.checkPassingEligibility();

    return 0;
}