#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {

            flag = 0;
            break;
        }
    }

    flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}