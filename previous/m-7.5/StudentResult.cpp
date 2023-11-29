#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float GPA;

    void input()
    {
        cin >> name >> roll >> GPA;
    }
    void output()
    {
        cout << " " << name << " " << roll << " " << GPA;
        cout << endl;
    }
};

bool cmp(Student a, Student b)
{
    if (a.GPA == b.GPA)
    {

        return a.roll < b.roll;
    }
    else
    {

        return a.GPA > b.GPA;
    }
}

int main()
{
    int n;
    cin >> n;
    Student res[n];
    for (int i = 0; i < n; i++)
    {
        res[i].input();
    }

    sort(res, res + n, cmp);
    for (int i = 0; i < n; i++)
    {
        res[i].output();
    }

    return 0;
}