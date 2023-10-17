#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, res;
    char ch1, ch2;
    cin >> n1 >> ch1 >> n2 >> ch2 >> res;
    // cout << n1 << ch1 << n2 << ch2 << res;
    switch (ch1)
    {
    case '+':
    {
        if (n1 + n2 == res)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << n1 + n2 << endl;
        }
        break;
    }
    case '-':
    {
        if (n1 - n2 == res)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << n1 - n2 << endl;
        }
        break;
    }
    case '*':
    {
        if (n1 * n2 == res)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << n1 * n2 << endl;
        }
        break;
    }
    }

    return 0;
}