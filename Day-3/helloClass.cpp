#include <bits/stdc++.h>
using namespace std;
class Programmer
{
public:
    char name[30];
    int age;
    char company[20];
    Programmer(char *n, int a, char *c)
    {
        strcpy(name, n);
        strcpy(company, c);
        age = a;
    }
    void display()
    {
        cout << "name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Company = " << company << endl;
        cout << "----------------" << endl;
    }
};

Programmer *getAProgrammer()
{
    int age;
    char name[30], company[20];
    cin.getline(name, 30);
    cin.getline(company, 30);
    cin >> age;
    Programmer *p1 = new Programmer(name, age, company);
    return p1;
}
int main()
{

    Programmer *p1 = getAProgrammer();

    p1->display();
    // (*p1).display();

    delete p1;
    (*p1).display();

    return 0;
}