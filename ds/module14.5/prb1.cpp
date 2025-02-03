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

int main()
{

    myStack st1;
    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int t;
        cin >> t;
        st1.push(t);
    }

    myStack st2;
    int n2;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int t;
        cin >> t;
        st2.push(t);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() != st2.top())
        {
            cout << "NO" << endl;
            return 0;
        }

        st1.pop();
        st2.pop();
    }

    cout << "YES" << endl;

    return 0;
}