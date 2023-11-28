#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream sArray(s);
    string word;
    while (sArray >> word)
    {
        cout << word << endl;
    }
    return 0;
}