#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char sec;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].roll;
        cin >> a[i].sec;
        cin >> a[i].mark;
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(a[i].sec, a[j].sec);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " ";
        cout << a[i].roll << " ";
        cout << a[i].sec << " ";
        cout << a[i].mark << " ";
        cout << endl;
    }

    return 0;
}