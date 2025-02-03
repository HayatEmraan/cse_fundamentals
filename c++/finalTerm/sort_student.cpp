#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    char s;
    int math_marks, eng_marks, id, cls;
};

bool sorting(Student s1, Student s2)
{
    int s1cmp = s1.math_marks + s1.eng_marks;
    int s2cmp = s2.math_marks + s2.eng_marks;

    if (s1cmp == s2cmp)
    {
        return s1.id < s2.id;
    }

    return s1cmp > s2cmp;
}

int main()
{
    int n;

    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s + n, sorting);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}