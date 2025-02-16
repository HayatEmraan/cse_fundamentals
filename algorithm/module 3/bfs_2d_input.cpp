#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;

    cin >> n >> e;

    char v[n][e];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            char a;
            cin >> a;
            v[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}