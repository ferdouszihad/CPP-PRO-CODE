#include <bits/stdc++.h>
using namespace std;
class Coder
{
public:
    int exp;
    char lang[20];

    Coder()
    {

        cin >> exp; // 19
        cin >> lang;
    }
};
void increaseExperience(int value, Coder person)
{
    person.exp += value;
    return person;
};

int main()
{
    Coder zihad;
    cout << &zihad.exp << endl;
    zihad = increaseExperience(4, zihad);
    cout << &zihad.exp << endl;
    cout
        << zihad.exp << " " << zihad.lang;

    return 0;
}