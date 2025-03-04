#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int adj[505][505];

void floyd_warshall()
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] != INT_MAX && adj[k][j] != INT_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }
}

int main()
{

    cin >> n >> m >> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = INT_MAX;
        }
    }

    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
        adj[b][a] = c;
    }

    floyd_warshall();

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;

        if (adj[x][y] == INT_MAX)
            cout << -1 << endl;
        else
            cout << adj[x][y] << endl;
    }

    return 0;
}