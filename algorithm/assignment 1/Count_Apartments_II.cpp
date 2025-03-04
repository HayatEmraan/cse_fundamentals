#include <bits/stdc++.h>
using namespace std;

int n, m;

char v[1010][1010];
bool vis[1010][1010];

vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int dfs(int r, int c)
{
    vis[r][c] = true;

    int t = 1;

    for (pair<int, int> p : d)
    {
        int si = p.first + r;
        int sj = p.second + c;

        if (!vis[si][sj] && v[si][sj] == '.')
        {
            t += dfs(si, sj);
        }
    }

    return t;
}

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> cnt;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && v[i][j] == '.')
            {

                int vl = dfs(i, j);

                cnt.push_back(vl);
            }
        }
    }

    if (!cnt.size())
        cout << 0 << " ";
    else
    {
        sort(cnt.begin(), cnt.end());
        for (int cn : cnt)
            cout << cn << " ";
    }

    return 0;
}