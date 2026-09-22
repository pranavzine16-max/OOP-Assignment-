#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string name;
    string author;
    int price;

    Book(string n, string a, int p)
    {
        name = n;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1("Physics Galaxy", "Ashish Arora", 1000);

    b1.display();

    return 0;
}
