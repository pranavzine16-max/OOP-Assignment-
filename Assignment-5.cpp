#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string course;
    int rollNo;

    Student(string n, string c, int r)
    {
        name = n;
        course = c;
        rollNo = r;
    }

    void display()
    {
        cout << "------ Student Details ------" << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Pranav", "AI ML", 66);

    s1.display();

    return 0;
}
