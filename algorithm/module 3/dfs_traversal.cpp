#include <bits/stdc++.h>
using namespace std;

vector<int> adj[50];
bool vis[50];

void dfs(int src)
{
    vis[src] = true;
    cout << src << " ";

    for (int child : adj[src])
        if (!vis[child])
            dfs(child);
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

    dfs(0);

    return 0;
}