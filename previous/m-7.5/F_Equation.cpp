#include <bits/stdc++.h>
using namespace std;

long long int pow(int n, int p)
{
    long long int res = 1;
    while (p > 0)
    {
        res *= n;
        p--;
    }

    return res;
}
int main()
{
    int num, p;
    cin >> num >> p;
    long long int res = 0;
    for (int i = 2; i <= p; i += 2)
    {
        res += pow(num, i);
    }
    cout << res << endl;

    return 0;
}