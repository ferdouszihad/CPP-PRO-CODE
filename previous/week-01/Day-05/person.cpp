#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[40];
    float height;
    int age;

    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
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

Person compareAge(Person p1, Person p2)
{
    if (p1.age > p2.age)
    {
        return p1;
    }
    else if (p1.age < p2.age)
    {
        return p2;
    }
}

int main()
{

    char name1[100] = "neela";
    Person human1(name1, 5.2, 19);
    char name2[100] = "Shila";
    Person human2(name1, 4.10, 18);

    Person OldOne = compareAge(human1, human2);

    cout << OldOne.name << " is greate in age" << endl;

    return 0;
}