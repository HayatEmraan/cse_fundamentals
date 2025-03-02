#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adj_mat[n + 1][n + 1];

    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 1; i <= n; i++)
    {
        adj_mat[i][i] = 1;
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // undirect adjacency matrix
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}