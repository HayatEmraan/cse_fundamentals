#include <bits/stdc++.h>
using namespace std;

int n, m;
int r1, r2, d1, d2;
char adj[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];

vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool valid(int r1, int c1)
{
    return r1 < 0 || r1 >= n || c1 < 0 || c1 >= m;
}

void bfs()
{
    vis[r1][r2] = true;

    queue<pair<int, int>> q;

    q.push({r1, r2});

    while (!q.empty())
    {
        pair<int, int> f = q.front();
        q.pop();

        int f1 = f.first;
        int f2 = f.second;

        for (pair<int, int> p : d)
        {
            int c1 = p.first + f1;
            int c2 = p.second + f2;

            if (!valid(c1, c2) && !vis[c1][c2] && (adj[c1][c2] == '.' || adj[c1][c2] == 'D'))
            {
                q.push({c1, c2});
                vis[c1][c2] = true;
                parent[c1][c2] = {f1, f2};
            }
        }
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
            if (adj[i][j] == 'R')
                r1 = i, r2 = j;
            if (adj[i][j] == 'D')
                d1 = i, d2 = j;
            parent[i][j] = {-1, -1};
        }
    }

    // cout << r1 << " " << r2 << endl;

    // cout << d1 << " " << d2 << endl;

    memset(vis, false, sizeof(vis));

    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         parent[i][j] = {-1, -1};

    bfs();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         auto yt = parent[i][j];
    //         cout << yt.first << " " << yt.second << endl;
    //     }
    // }

    // cout << cd.first << " " << cd.second << endl;

    int x = d1, y = d2;
    // pair<int, int> cd = parent[x][y];

    while (x != -1 && y != -1)
    {
        adj[x][y] = 'X';
        int px = parent[x][y].first;
        int py = parent[x][y].second;
        x = px;
        y = py;
        // cout << x << " " << y << endl;
    }

    adj[r1][r2] = 'R';
    adj[d1][d2] = 'D';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adj[i][j];
        }
        cout << endl;
    }

    return 0;
}