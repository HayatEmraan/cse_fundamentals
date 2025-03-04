#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[1005][1005];
char adj[1005][1005];

vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int ri, int ci)
{
    return ri >= n || ri < 0 || ci >= m || ci < 0;
}

void dfs(int r, int c)
{
    vis[r][c] = true;

    for (pair<int, int> p : d)
    {
        int p1 = p.first + r;
        int p2 = p.second + c;

        if (!valid(p1, p2) && !vis[p1][p2] && adj[p1][p2] == '.')
            dfs(p1, p2);
    }
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

    memset(vis, false, sizeof(vis));

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    dfs(si, sj);

    if (vis[di][dj])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}