#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while (s.find("EGYPT") < s.size())
    {
        int index = s.find("EGYPT");

        s.replace(index, 5, " ");
    }
    cout << s << endl;

    return 0;
}