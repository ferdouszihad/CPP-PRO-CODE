#include <bits/stdc++.h>
using namespace std;
int *findMax(int *a, int n)
{
    a[0] = 99;
    return a;
}

int main()
{
    int n;
    cin >> n;
    // int a[n];
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int *res = findMax(a, n);

    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    return 0;
}