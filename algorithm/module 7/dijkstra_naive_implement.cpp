#include <bits/stdc++.h>
using namespace std;

int dis[50];
vector<pair<int, int>> d[50];

void dijkstra()
{
    dis[0] = 0;
    queue<pair<int, int>> q;
    q.push({0, 0});

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int f1_node = p.first;
        int f2_dis = p.second;

        for (auto child : d[f1_node])
        {
            int c1_node = child.first;
            int c2_dis = child.second;

            if ((f2_dis + c2_dis) < dis[c1_node])
            {
                dis[c1_node] = f2_dis + c2_dis;
                q.push({c1_node, f2_dis + c2_dis});
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

    for (int i = 0; i < 50; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra();

    for (int i = 0; i < n; i++)
    {
        cout << 0 << " to " << i << " distance " << dis[i] << endl;
    }

    return 0;
}