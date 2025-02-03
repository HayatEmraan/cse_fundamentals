#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    queue<int> q;
    void push(int val)
    {
        q.push(val);
    }

    void pop()
    {
        queue<int> q2;

        while (!q.empty())
        {
            int qv = q.front();
            q.pop();

            if (q.empty())
                break;
            q2.push(qv);
        }

        q = q2;
    }

    int top()
    {
        return q.back();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{

    int n;
    cin >> n;

    myStack my;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        my.push(t);
    }

    // cout << my.size() << endl;

    while (!my.empty())
    {
        cout << my.top() << endl;
        my.pop();
    }

    // cout << my.empty() << endl;

    return 0;
}