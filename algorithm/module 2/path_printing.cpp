#include <bits/stdc++.h>
using namespace std;

bool vis[105];
int parent[105];

vector<int> adj[105];

int n, e;

void input_bfs()
{
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    cin >> n >> e;
    input_bfs();

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    int src, des;
    cin >> src >> des;
    bfs(src);

    int node = des;

    while (node != -1)
    {
        cout << node << " ";
        node = parent[node];
    }

    return 0;
}