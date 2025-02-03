#include <bits/stdc++.h>
using namespace std;

class myStack
{
private:
    vector<int> val;

public:
    void push(int val)
    {
        this->val.push_back(val);
    }

    void pop()
    {
        val.pop_back();
    }

    int top()
    {
        return val.back();
    }

    int size()
    {
        return val.size();
    }

    bool empty()
    {
        return val.empty();
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