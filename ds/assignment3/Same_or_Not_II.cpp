#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{

    int n, m;
    cin >> n >> m;

    myStack s;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        s.push(tmp);
    }

    myQueue q;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;

        q.push(tmp);
    }

    if (s.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            cout << "NO";
            return 0;
        }

        s.pop();
        q.pop();
    }

    cout << "YES";

    return 0;
}