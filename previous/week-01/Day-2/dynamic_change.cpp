#include <bits/stdc++.h>
using namespace std;

int *getArray(int startIndex, int size)
{
    int *arr = new int[size];

    for (int i = startIndex; i < size; i++)
    {
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cin >> n;
    int *a = getArray(0, n);
    int m;
    cin >> m;
    int *b = getArray(n, m);
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}