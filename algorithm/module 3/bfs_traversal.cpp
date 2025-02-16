#include <bits/stdc++.h>
using namespace std;

vector<int> v[50];
bool vis[50];

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        cout << f << " ";
        for (int c : v[f])
            if (!vis[c])
            {
                vis[c] = true;
                q.push(c);
            }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs(0);

    return 0;
}