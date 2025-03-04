#include <bits/stdc++.h>
using namespace std;

int dis[50];
vector<pair<int, int>> d[50];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> f = q.front();

        int f1 = f.first;
        int f2 = f.second;

        q.pop();

        for (pair<int, int> p : d[f1])
        {
            if ((f2 + p.second) < dis[p.first])
            {
                dis[p.first] = f2 + p.second;
                q.push({p.first, f2 + p.second});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        d[a].push_back({b, c});
        d[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << 0 << " to distance " << i << " --> " << dis[i] << endl;
    }

    return 0;
}