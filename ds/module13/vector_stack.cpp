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

    myStack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}