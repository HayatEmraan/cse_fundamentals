#include <bits/stdc++.h>
using namespace std;

bool vis[50];
int parent[50];
vector<int> d[50];
bool flag = false;

void bfs(int src)
{
    vis[src] = true;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : d[par])
        {
            if (vis[child] && parent[par] != child)
                flag = true;
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
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        d[a].push_back(b);
        d[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    bfs(0);

    if (flag)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";
    return 0;
}