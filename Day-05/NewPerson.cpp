#include <bits/stdc++.h>
using namespace std;
class Person // The Class Person which have 3 data Name,height  and age
{
public:
    char name[40];
    float height;
    int age;

    Person(char *n, float h, int a)
    // constructor to initialize data. Call automatically when an Object is created.
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
    // A display function given below to show the data of object
    void display()
    {
        cout << "~~~~~~~~~~~~~~~" << endl;
        cout << "New person created" << endl;
        cout << "Name\t = " << name << endl;
        cout << "height\t = " << height << endl;
        cout << "age   \t = " << age << endl;
        cout << "~~~~~~~~~~~~~~~" << endl;
    }
};

int main()
{
    char name[20] = "Neela";
    Person *human1 = new Person(name, 5.2, 19); // creating an object with the class Person.
    human1->display();                          // calling display function to show the data.

    return 0;
}
