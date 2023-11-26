#include <bits/stdc++.h>
using namespace std;
int *getArray(int n, int initial)
{
    int *a = new int[n];
    for (int i = initial; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int *copyArray(int *a, int sizeOfa, int newArraySize)
{
    int *b = new int[newArraySize];
    for (int i = 0; i < sizeOfa; i++)
    {
        b[i] = a[i];
    }

    for (int i = sizeOfa; i < newArraySize; i++)
    {
        cin >> b[i];
    }

    delete[] a;
    return b;
}
int main()
{
    int n;
    cin >> n;
    int *a = getArray(n, 0);

    int newSize;
    cin >> newSize;
    int *b = copyArray(a, n, newSize);

    for (int i = 0; i < newSize; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}