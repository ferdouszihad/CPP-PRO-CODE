#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char ch;
    int a[26] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        a[int(ch) - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
            continue;

        while (a[i] > 0)
        {
            cout << char(i + 97);

            a[i]--;
        }
    }
    cout << endl;

    return 0;
}