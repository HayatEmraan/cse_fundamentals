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

    queue<int> qu2;
    int n2;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int t;
        cin >> t;
        qu2.push(t);
    }

    if (st1.size() != qu2.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st1.empty() && !qu2.empty())
    {
        if (st1.top() != qu2.front())
        {
            cout << "NO" << endl;
            return 0;
        }

        st1.pop();
        qu2.pop();
    }

    cout << "YES" << endl;

    return 0;
}