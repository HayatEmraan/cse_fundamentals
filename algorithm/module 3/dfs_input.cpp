#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int child : adj[i])
            cout << child << " ";

        cout << endl;
    }

    return 0;
}