#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    cin >> word;
    int c = 0;

    while (ss >> s)
    {
        if (s == word)
            c++;
    }

    cout << c << endl;

    return 0;
}