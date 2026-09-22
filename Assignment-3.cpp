#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int empID;
    string name;
    string department;
    int salary;

    void display()
    {
        cout << "----- Employee Details -----" << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.empID = 1616;
    e1.name = "Pranav";
    e1.department = "SOAI DIV 2";
    e1.salary = 100000;

    e1.display();

    return 0;
}
