#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string name;
    string writer;
    float cost;

public:
    void input()
    {
        cout << "Enter book name: ";
        getline(cin, name);

        cout << "Enter writer name: ";
        getline(cin, writer);

        cout << "Enter book price: ";
        cin >> cost;
    }

    void show()
    {
        cout << "\n--- Book Information ---" << endl;
        cout << "Book Name: " << name << endl;
        cout << "Writer: " << writer << endl;
        cout << "Price: " << cost << endl;
    }
};

int main()
{
    Book book1;

    book1.input();
    book1.show();
return 0;
}
