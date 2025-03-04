#include <bits/stdc++.h>
using namespace std;

int dis[50];
vector<pair<int, int>> d[50];

void dijkstra(int src)
{
    dis[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});

    while (!pq.empty())
    {
        pair<int, int> f = pq.top();
        pq.pop();
        int f2_node = f.second;
        int f1_dis = f.first;

        for (pair<int, int> p : d[f2_node])
        {
            int p2_node = p.first;
            int p1_dis = p.second;

            int total_dis = p1_dis + f1_dis;

            if (total_dis < dis[p2_node])
            {
                dis[p2_node] = total_dis;
                pq.push({total_dis, p2_node});
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