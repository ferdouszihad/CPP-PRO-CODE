#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream sbox(s);
    while (sbox >> s)
    {
        if (s == "Jessica")
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}