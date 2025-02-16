#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bool vis[n + 100];
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int child : adj_list[i])
        {
            if (!vis[child])
                vis[child] = true;
        }
    }

    int c;
    cin >> c;

    if (vis[c])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}