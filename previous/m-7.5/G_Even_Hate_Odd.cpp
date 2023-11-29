#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int a[n];
        int odd = 0, even = 0, opt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (n % 2 == 1)
        {
            opt = -1;
        }
        else
        {

            if (odd > even)
            {
                opt = odd - (n / 2);
            }
            else if (odd < even)
            {
                opt = even - (n / 2);
            }
        }

        cout << opt << endl;

        t--;
    }

    return 0;
}