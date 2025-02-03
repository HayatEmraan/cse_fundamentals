#include <bits/stdc++.h>
using namespace std;

class myStack
{
private:
    list<int> l;

public:
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

    int n;
    cin >> n;
    myStack st;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        st.push(t);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}