#include <bits/stdc++.h>
using namespace std;

void print(stringstream &s)
{
    string word;
    while (s >> word)
    {
        print(s);
        cout << word << endl;
    }
}

int main()
{
    string s;

    getline(cin, s);

    stringstream s_array(s);

    print(s_array);

    return 0;
}