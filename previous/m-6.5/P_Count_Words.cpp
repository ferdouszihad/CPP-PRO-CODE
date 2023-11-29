#include <bits/stdc++.h>
using namespace std;

int is_alpha(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (!is_alpha(s[i]))
        {
            s[i] = ' ';
        }
    }

    // cout << s;

    stringstream ss(s);

    int c = 0;
    while (ss >> s)
    {
        c++;
    }
    cout << c;

    return 0;
}