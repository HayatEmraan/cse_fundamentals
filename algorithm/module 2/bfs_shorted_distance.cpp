#include <bits/stdc++.h>
using namespace std;

int n, e;
bool vis[105];
int level[105];
vector<int> adj[105];


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
    level[src] = 0;

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
                level[child] = level[f] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> e;
    input_bfs();

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src, des;
    cin >> src >> des;

    bfs(src);

    cout << level[des];

    return 0;
}