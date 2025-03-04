#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main()
{

    int n, e;
    cin >> n >> e;
    vector<Edge> d;

    int dis[n];

    while (e--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        d.push_back(Edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto e : d)
        {
            int a = e.a;
            int b = e.b;
            int c = e.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " --------> " << dis[i] << endl;
    }

    return 0;
}