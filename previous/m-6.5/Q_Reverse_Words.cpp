#include <bits/stdc++.h>
using namespace std;
void revPrint(string s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    stringstream count(s);
    int c = 0, q = 0;
    string word;
    while (count >> word)
    {
        c++;
    }

    while (ss >> s)
    {
        revPrint(s);

        q += 1;
        if (c != q)
            cout << " ";
    }

    return 0;
}