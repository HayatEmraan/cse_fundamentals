#include <bits/stdc++.h>
using namespace std;

int n, m;
char adj[50][50];
bool vis[50][50];

vector<pair<int, int>> t = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int r, int c)
{
    return r >= n || r < 0 || c >= m || c < 0;
}

void dfs(int r, int c)
{
    vis[r][c] = true;
    cout << r << " " << c << endl;

    for (auto it : t)
    {
        int ri = it.first + r;
        int ci = it.second + c;

        if (!valid(ri, ci) && !vis[ri][ci])
            dfs(ri, ci);
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            adj[i][j] = a;
        }
    }

    int r, c;
    cin >> r >> c;
    dfs(r, c);

    return 0;
}