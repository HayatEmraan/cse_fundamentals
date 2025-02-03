#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int section;
    int math_marks;
    int cls;
    Student(string n, int r, int s, int m, int c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    Student hayat = Student("hayat", 2, 57, 9, 2);

    cout << hayat.name << " " << hayat.roll << " " << hayat.math_marks;
    return 0;
}