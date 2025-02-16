#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool vis[n];
    memset(vis, false, sizeof(vis));
    int src, des;
    cin >> src >> des;

    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        for (int child : adj[f])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }

    if (vis[des])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}