#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    char ch;
    cin >> n1 >> ch >> n2;

    switch (ch)
    {
    case '>':
    {
        if (n1 > n2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    }
    case '<':
    {
        if (n1 < n2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    }
    case '=':
    {
        if (n1 == n2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    }
    };

    return 0;
}