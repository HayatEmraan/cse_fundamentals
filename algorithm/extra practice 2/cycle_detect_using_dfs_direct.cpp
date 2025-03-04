#include <bits/stdc++.h>
using namespace std;

bool flag = false;
vector<int> d[50];
bool vis[50], path[50];

void dfs(int src)
{
    vis[src] = true;
    path[src] = true;

    for (int child : d[src])
    {

        if (vis[child] && vis[child])
            flag = true;

        if (!vis[child])
            dfs(child);
    }

    path[src] = false;
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
    }

    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));

    dfs(0);

    if (flag)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}