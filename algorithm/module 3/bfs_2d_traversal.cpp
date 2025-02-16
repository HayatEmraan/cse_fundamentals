#include <bits/stdc++.h>
using namespace std;

int n, e;
char v[50][50];
bool vis[50][50];
int level[50][50];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int r, int c)
{
    return r >= n || r < 0 || c >= e || c < 0;
}

void bfs(int r, int c)
{

    queue<pair<int, int>> q;
    q.push({r, c});

    vis[r][c] = true;
    level[r][c] = 0;

    while (!q.empty())
    {
        pair<int, int> f = q.front();
        q.pop();

        int par_i = f.first;
        int par_c = f.second;

        // cout << par_i << " " << par_c << endl;

        for (int i = 0; i < 4; i++)
        {
            int fs = d[i].first + par_i;
            int ss = d[i].second + par_c;

            if (!valid(fs, ss) && !vis[fs][ss])
            {
                q.push({fs, ss});
                vis[fs][ss] = true;
                level[fs][ss] = level[par_i][par_c] + 1;
            }
        }
    }
}

int main()
{

    cin >> n >> e;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < e; j++)
            cin >> v[i][j];

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int ri, rc, src, des;
    cin >> ri >> rc >> src >> des;
    bfs(ri, rc);

    cout << level[src][des];
    return 0;
}