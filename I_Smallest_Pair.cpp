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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int minSum = a[0] + a[1] + 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int res = a[i] + a[j] + j - i;

                minSum = min(minSum, res);
            }
        }

        cout << minSum << endl;

        t--;
    }

    return 0;
}