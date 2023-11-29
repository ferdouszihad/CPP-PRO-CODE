#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string name;
    int cls;
    int id;
    char s;
    int math;
    int eng;
};

bool cmp(Students a, Students b)
{
    if (a.eng == b.eng)
    {
        if (a.math == b.math)
        {
            return a.id < b.id;
        }
        else
        {
            return a.math > b.math;
        }
    }
    else
    {

        return a.eng > b.eng;
    }
}
int main()
{
    int n;
    cin >> n;
    Students a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].cls;
        cin >> a[i].s;
        cin >> a[i].id;
        cin >> a[i].math;
        cin >> a[i].eng;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " ";
        cout << a[i].cls << " ";
        cout << a[i].s << " ";
        cout << a[i].id << " ";
        cout << a[i].math << " ";
        cout << a[i].eng;
        cout << endl;
    }

    return 0;
}
