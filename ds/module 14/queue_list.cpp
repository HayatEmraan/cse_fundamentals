#include <bits/stdc++.h>
using namespace std;

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

    int size()
    {
        return l.size();
    }

    int front()
    {
        return l.front();
    }

    int back()
    {
        return l.back();
    }

    bool empty()
    {
        return l.empty();
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

    cout << my.size() << endl;
    cout << my.back() << endl;

    while (!my.empty())
    {
        cout << my.front() << endl;
        my.pop();
    }

    cout << my.empty() << endl;

    return 0;
}