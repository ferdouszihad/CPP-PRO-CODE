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

int main()
{
    int n;
    cin >> n;
    Student res[n];
    for (int i = 0; i < n; i++)
    {
        res[i].input();
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(res[i], res[j]);
    }

    for (int i = 0; i < n; i++)
    {
        res[i].output();
    }

    return 0;
}