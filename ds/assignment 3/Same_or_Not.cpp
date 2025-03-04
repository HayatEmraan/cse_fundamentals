#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        s.push(tmp);
    }

    queue<int> q;
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