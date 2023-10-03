#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (isdigit(ch))
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        if (isalpha(ch))
        {
            cout << "ALPHA" << endl;
            if (isupper(ch))
            {
                cout << "IS CAPITAL" << endl;
            }
            else
            {
                cout << "IS SMALL" << endl;
            }
        }
    }

    return 0;
}