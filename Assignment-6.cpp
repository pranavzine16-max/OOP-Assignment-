#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int eid;
    string name;

    Employee(int id, string n)
    {
        eid = id;
        name = n;
        cout << "Employee record created!" << endl;
    }

    ~Employee()
    {
        cout << "Employee record deleted!" << endl;
    }

    void display()
    {
        cout << "Employee ID: " << eid << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Employee e1(101,"Pinku");

    e1.display();

    return 0;
}
