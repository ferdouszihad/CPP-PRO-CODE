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
void sortArray(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int *a = getArray(n);

    sortArray(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}