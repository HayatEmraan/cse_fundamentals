#include <bits/stdc++.h>
using namespace std;
vector<int> adj[50];
bool vis[50];
int cnt = 0;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

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
                cnt = cnt + 1;
            }
        }

        break;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int node;
    cin >> node;

    bfs(node);

    cout << cnt;

    return 0;
}