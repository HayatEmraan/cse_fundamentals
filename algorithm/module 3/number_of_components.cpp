#include <bits/stdc++.h>
using namespace std;
vector<int> v[50];
bool vis[50];

void dfs(int src)
{

    vis[src] = true;
    // cout << src << " ";

    for (int iv : v[src])
    {
        if (!vis[iv])
            dfs(iv);
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

        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i);
            // cout << endl;
        }
    }

    cout << cnt;

    return 0;
}