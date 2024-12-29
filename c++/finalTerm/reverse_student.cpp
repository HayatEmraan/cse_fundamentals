#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;

    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id;
    }

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {

        if (i >= j)
        {
            break;
        }

        char prev = s[i].s;
        char back = s[j].s;

        s[j].s = prev;
        s[i].s = back;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << endl;
    }

    return 0;
}