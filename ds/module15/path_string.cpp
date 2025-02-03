#include <bits/stdc++.h>
using namespace std;

bool checker(stack<char> &s, queue<char> &q)
{
    bool flag = true;
    if (s.top() == 40 && q.front() != 41)
    {
        flag = false;
    }
    else if (s.top() == 91 && q.front() != 93)
    {
        flag = false;
    }
    else if (s.top() == 123 && q.front() != 125)
    {
        flag = false;
    }

    if (flag)
    {
        s.pop();
        q.pop();
        return flag;
    }
    else
    {
        return flag;
    }
}

int main()
{

    queue<char> q;
    stack<char> s;

    string str = "(";

    bool flagOpt = true;

    for (auto ltr : str)
    {
        if ((ltr == 40) || (ltr == 91) || (ltr == 123))
        {
            s.push(ltr);
        }
        else if ((ltr == 41) || (ltr == 93) || (ltr == 125))
        {
            q.push(ltr);

            if (s.empty())
            {
                flagOpt = false;
                break;
            }

            bool opt = checker(s, q);

            if (!opt)
            {
                flagOpt = opt;
                break;
            }
        }
    }


    if (s.size() != q.size()) {
        flagOpt = false;
    }
    cout << flagOpt << endl;

    return 0;
}