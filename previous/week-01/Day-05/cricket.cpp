#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[30];
};

int main()
{
    Cricketer *Dhoni = new Cricketer;
    Cricketer *Kohli = new Cricketer;
    char s[100] = "India";
    Dhoni->jersey_no = 75;
    strcpy(Dhoni->country, s);
    // Dhoni->country
    cout << Dhoni->country;
    cout << Dhoni->jersey_no;
    cout << endl;
    // delete Dhoni;

    Kohli->jersey_no = Dhoni->jersey_no;
    strcpy(Kohli->country, Dhoni->country);
    delete Dhoni;

    cout << Kohli->country;
    cout << Kohli->jersey_no;
    cout << endl;

    return 0;
}