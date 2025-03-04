#include <bits/stdc++.h>
using namespace std;

bool flag = false;
int parent[50];
bool vis[50];
vector<int> d[50];

void dfs(int src)
{
    vis[src] = true;

    for (int child : d[src])
    {
        if (vis[child] && parent[src] != child)
            flag = true;
        if (!vis[child])
        {
            parent[child] = src;
            dfs(child);
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

    dfs(0);

    if (flag)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}