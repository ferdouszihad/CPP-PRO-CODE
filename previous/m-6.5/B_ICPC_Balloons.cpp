#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int len;
        int a[26] = {0};
        char ch;
        cin >> len;
        cin.ignore();
        for (int i = 0; i < len; i++)
        {
            cin >> ch;
            if (a[int(ch) - 65] == 0)
            {
                a[int(ch) - 65] += 2;
            }
            else
            {
                a[int(ch) - 65] += 1;
            }
        }

        int c = 0;

        for (int i = 0; i < 26; i++)
        {
            c += a[i];
        }
        cout << c << endl;

        n--;
    }
    return 0;
}