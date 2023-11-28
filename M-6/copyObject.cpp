#include <bits/stdc++.h>
using namespace std;
class Juice
{
public:
    string metarial;
    string color;
    Juice(string n, string c)
    {
        metarial = n;
        color = c;
        display();
    }
    void display()
    {
        cout << metarial << " " << color << endl;
    }
};

int main()
{
    Juice *honey = new Juice("Honey", "golden");
    Juice *apple = new Juice("Apple", "yellow");

    *honey = *apple;

    honey->display();
    cout << honey << endl;
    cout << apple << endl;

    return 0;
}