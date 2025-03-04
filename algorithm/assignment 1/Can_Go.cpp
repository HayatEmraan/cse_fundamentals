#include <bits/stdc++.h>
using namespace std;

int n, m;

char v[1010][1010];
bool vis[1010][1010];
int level[1010][1010];

vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int r, int c)
{
    return r >= n || r < 0 || c >= m || c < 0;
}

void dfs(int par_i, int par_c)
{
    vis[par_i][par_c] = true;

    for (pair<int, int> it : d)
    {
        int ci = it.first + par_i;
        int cj = it.second + par_c;

        if (!valid(ci, cj) && !vis[ci][cj] && v[ci][cj] != '#')
        {
            level[ci][cj] = level[par_i][par_c] + 1;
            dfs(ci, cj);
        }
    }
}

int main()
{

    cin >> n >> m;

    int si, sj, di, dj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;

            if (c == 'A')
            {
                si = i;
                sj = j;
            }

            if (c == 'B')
            {
                di = i;
                dj = j;
            }
            v[i][j] = c;
        }
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    level[si][sj] = 0;
    dfs(si, sj);

    if (level[di][dj] == -1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}