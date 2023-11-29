#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        char ch, ign;
        cin >> n;
        cin.ignore();
        cin >> ch;

        string s(n, ch);
        // cout << ch << endl;
        for (char c : s)
        {
            cout << ch << " ";
        }
        cout << endl;

        t--;
    }

    return 0;
}