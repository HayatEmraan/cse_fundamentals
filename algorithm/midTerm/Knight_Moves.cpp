#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[105][105];
int level[105][105];

int adj[105][105];

vector<pair<int, int>> d = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool valid(int r, int c)
{
    return r >= n || r < 0 || c >= m || c < 0;
}

void bfs(int r, int c)
{
    vis[r][c] = true;
    level[r][c] = 0;

    queue<pair<int, int>> q;
    q.push({r, c});

    while (!q.empty())
    {
        auto f = q.front();
        q.pop();

        int f1 = f.first;
        int f2 = f.second;

        for (auto p : d)
        {
            int t1 = p.first + f1;
            int t2 = p.second + f2;

            if (!valid(t1, t2) && !vis[t1][t2] && adj[t1][t2] == 1)
            {
                vis[t1][t2] = true;
                level[t1][t2] = level[f1][f2] + 1;
                q.push({t1, t2});
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k1, k2, q1, q2;
        cin >> n >> m >> k1 >> k2 >> q1 >> q2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                adj[i][j] = 1;
            }
        }

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(k1, k2);

        cout << level[q1][q2] << endl;
    }

    return 0;
}