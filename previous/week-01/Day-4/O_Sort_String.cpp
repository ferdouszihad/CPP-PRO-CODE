#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
    }
    cin >> n;
    char s[n];
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        a[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (a[i] > 0)
        {
            printf("%c", i + 97);
            a[i]--;
        }
    }
    return 0;
}