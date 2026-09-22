#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string course;

    void display()
    {
        cout << "Student Details" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s1;

    s1.rollNo = 66;
    s1.name = "Pranav";
    s1.course = "AIML";

    s1.display();

    return 0;
}
