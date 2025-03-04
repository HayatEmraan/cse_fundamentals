#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[1005][1005];
char adj[1005][1005];

vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int r1, int c1)
{
    return r1 >= n || r1 < 0 || c1 >= m || c1 < 0;
}

int dfs(int r, int c)
{
    vis[r][c] = true;
    int count = 1;

    for (pair<int, int> p : d)
    {
        int p1 = p.first + r;
        int p2 = p.second + c;

        if (!valid(p1, p2) && !vis[p1][p2] && adj[p1][p2] == '.')
            count += dfs(p1, p2);
    }

    return count;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj[i][j];
        }
    }

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && adj[i][j] == '.')
                mn = min(mn, dfs(i, j));
        }
    }

    if (mn == INT_MAX)
        cout << -1;
    else
        cout << mn;

    return 0;
}