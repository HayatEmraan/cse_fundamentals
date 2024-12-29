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

    int s1math = s1.math_marks, s2math = s2.math_marks;
    int s1eng = s1.eng_marks, s2eng = s2.eng_marks;

    if (s1eng == s2eng)
    {
        if (s1math == s2math)
        {
            return s1.id < s2.id;
        }
        return s1math > s2math;
    }

    return s1eng > s2eng;
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