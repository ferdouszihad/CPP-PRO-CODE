#include <bits/stdc++.h>
using namespace std;

namespace MathSpace
{
    class Calculate
    {
    public:
        int num1;
        int num2;
        Calculate(int num1, int num2)
        {
            this->num1 = num1;
            (*this).num2 = num2;
            display();
            sum();
            sub();
            mul();
            div();
        }
        void display()
        {
            cout << num1 << " " << num2 << endl;
        }
        int sum()
        {
            result("sum", num1 + num2);
            return num1 + num2;
        }
        int sub()
        {
            result("sub", num1 - num2);
            return num1 - num2;
        }
        int mul()
        {
            result("mul", num1 * num2);
            return num1 * num2;
        }
        int div()
        {
            result("div", num1 / num2);
            return num1 / num2;
        }
        void result(string type, int value)
        {
            cout << type << " = " << value << endl;
        }
    };

    int square(int n)
    {
        return n * n;
    }
}
using namespace MathSpace;
int main()
{
    Calculate value(15, 12);
    cout << square(12) << endl;
    return 0;
}