#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1;
    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int t;
        cin >> t;
        st1.push(t);
    }

    stack<int> st2;

    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}