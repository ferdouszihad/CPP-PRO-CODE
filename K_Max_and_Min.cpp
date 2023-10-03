#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3, mn, mx;
    cin >> n1 >> n2 >> n3;

    mn = min(n1, n2);
    mn = min(mn, n3);
    mx = max(n1, n2);
    mx = max(mx, n3);

    cout << mn << " " << mx << endl;

    return 0;
}