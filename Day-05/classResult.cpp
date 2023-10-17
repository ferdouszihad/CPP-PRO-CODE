#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[30];
    int roll;
    char section;
    int math_marks;
    int className;

    Student(char *n, int r, char s, int mrk, int cls)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = mrk;
        className = cls;
    }
};

int main()
{
    char name[3][30] = {"emu", "zihad", "Ayan"};
    Student s1(name[0], 19, 'A', 91, 10);
    Student s2(name[1], 20, 'A', 19, 10);
    Student s3(name[2], 21, 'A', 92, 10);

    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks)
    {
        cout << s1.name << "got Highest Mark";
    }
    else if (s2.math_marks > s3.math_marks && s2.math_marks > s1.math_marks)
    {
        cout << s2.name << " got Highest Mark";
    }
    else if (s3.math_marks > s1.math_marks && s3.math_marks > s2.math_marks)
    {
        cout << s3.name << "got Highest Mark";
    }

    return 0;
}