#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s1;
    string str1 = "ab##";

    for (auto l1 : str1)
    {
        if (l1 == '#')
        {
            s1.pop();
            continue;
        }

        s1.push(l1);
    }

    stack<char> s2;
    string str2 = "c#d#";

    for (auto l2 : str2)
    {
        if (l2 == '#')
        {
            s2.pop();
            continue;
        }

        s2.push(l2);
    }

    if (s1.size() != s2.size())
    {
        cout << "NO";
        return 0;
    }

    bool flag = true;

    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() != s2.top())
        {
            flag = false;
            break;
        }

        s1.pop();
        s2.pop();
    }

    cout << flag;

    return 0;
}