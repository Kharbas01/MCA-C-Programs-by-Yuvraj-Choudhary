#include <iostream>
using namespace std;

class Employee {
private:
    int Emp_Id;
    double Emp_Salary;

public:
    void Input(int id, double salary) {
        this->Emp_Id = id;
        this->Emp_Salary = salary;
    }

    void Show_Details() {
        cout << "Employee Id: " << Emp_Id << endl;
        cout << "Employee Salary: " << Emp_Salary << endl;
    }
};

int main() {
    int a;
    int id;
    double sal;

    cout << "Enter The Size Of An Array: ";
    cin >> a;

    Employee* e1 = new Employee[a];

    for (int i = 0; i < a; i++) {
        cout << "\nEnter Details for Employee " << i + 1 << ":" << endl;
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> sal;

        e1[i].Input(id, sal);
    }

    cout << "\n--- Employee Details ---" << endl;

    for (int i = 0; i < a; i++) {
        e1[i].Show_Details();
        cout << endl;
    }

    delete[] e1;

    return 0;
}