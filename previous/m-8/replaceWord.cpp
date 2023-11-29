#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string s1, s2;
        cin >> s1 >> s2;
        while (s1.find(s2) < s1.size())
        {
            int index = s1.find(s2);
            int size = s2.size();
            s1.replace(index, size, "#");
        }
        cout << s1;

        t--;
    }

    return 0;
}