#include <bits/stdc++.h>
using namespace std;

int main()
{
    // with oparetor
    string s0 = "ferdous zihad";
    // with constructor
    string s1("ferdous zihad INC");
    // with c:: unAssign String , size;
    string s2("ferdous zihad INC", 4);
    // with c:: size , repeated character
    string s3(40, '_');

    string input;
    cin >> input;
    // with c (assigned string ,ignore length )
    string s(input, 4);
    // cin >> s;
    cout << s << " " << input;

    return 0;
}