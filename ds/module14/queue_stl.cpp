#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        q.push(t);
    }

    cout << q.size() << endl;
    cout << q.back() << endl;

    cout << q.empty() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    cout << q.size() << endl;

    cout << q.empty() << endl;

    return 0;
}