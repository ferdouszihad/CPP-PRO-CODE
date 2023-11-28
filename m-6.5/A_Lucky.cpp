#include <bits/stdc++.h>
using namespace std;
int num(char ch)
{
    return int(ch) - 48;
}
int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        string s;
        cin >> s;

        int sum1 = num(s[0]) + num(s[1]) + num(s[2]);
        int sum2 = num(s[3]) + num(s[4]) + num(s[5]);

        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        n--;
    }
    return 0;
}