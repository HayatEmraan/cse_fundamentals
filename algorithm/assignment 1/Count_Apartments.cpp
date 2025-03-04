#include <bits/stdc++.h>
using namespace std;

int n, m;

char v[1010][1010];
bool vis[1010][1010];

vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// bool valid(int r, int c)
// {
//     return r >= n || r < 0 || c >= m || c < 0;
// }
void dfs(int r, int c)
{
    vis[r][c] = true;

    // cout << r << " " << c << endl;

    for (pair<int, int> p : d)
    {
        int si = p.first + r;
        int sj = p.second + c;

        // cout << "inside dfs --< " << si << " " << sj << endl;
        if (!vis[si][sj] && v[si][sj] == '.')
        {
            // cout << " validation " << endl;
            dfs(si, sj);
        }
    }
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

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && v[i][j] == '.')
            {

                // cout << "inside for " << i << " " << j << endl;
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt;
    return 0;
}