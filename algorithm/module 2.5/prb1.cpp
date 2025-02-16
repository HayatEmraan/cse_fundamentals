#include <bits/stdc++.h>
using namespace std;

vector<int> adj[50];
bool vis[50];
int level[50];

void bfs(int s)
{

    queue<int> q;
    q.push(s);

    vis[s] = true;

    level[s] = 0;

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
    // node n & edge e
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // query
    int q;
    cin >> q;

    while (q--)
    {
        // set visted node default false
        memset(vis, false, sizeof(vis));

        // set level node default -1
        memset(level, -1, sizeof(level));

        // source s & destination d
        int s, d;
        cin >> s >> d;
        bfs(s);

        cout << level[d] << endl;
    }

    return 0;
}