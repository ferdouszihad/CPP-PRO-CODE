#include <bits/stdc++.h>
using namespace std;

int *getArray(int size)
{
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int *a = getArray(n);
    int m = a[0];
    for (int i = 1; i < n; i++)
        m = max(m, a[i]);

    cout << m;

    return 0;
}