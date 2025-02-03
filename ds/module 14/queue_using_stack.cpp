#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    stack<int> s;
    void push(int val)
    {
        s.push(val);
    }

    void pop()
    {
        stack<int> t;

        while (!s.empty())
        {
            int val = s.top();
            s.pop();

            if (s.empty())
                break;
            t.push(val);
        }

        while (!t.empty())
        {
            s.push(t.top());
            t.pop();
        }

        s = t;
    }

    int size()
    {
        return s.size();
    }

    int front()
    {
        stack<int> t = s;
        int val;
        while (!t.empty())
        {
            val = t.top();
            t.pop();

            if (t.empty())
                break;
        }

        return val;
    }

    int back()
    {
        return s.top();
    }

    bool empty()
    {
        return s.empty();
    }
};

int main()
{

    int n;
    cin >> n;

    myQueue my;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        my.push(t);
    }

    // cout << my.size() << endl;

    while (!my.empty())
    {
        cout << my.front() << endl;
        my.pop();
    }

    // cout << my.empty() << endl;

    return 0;
}