#include <bits/stdc++.h>
using namespace std;

vector<int> adj[50];
bool vis[50];
int level[50];
vector<int> lv;

void bfs(int l)
{
    queue<int> q;
    q.push(0);

    vis[0] = true;
    level[0] = 0;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        cout << "level :: " << level[f];
        cout << " value :: " << f << endl;

        if (l == level[f])
            lv.push_back(f);

        for (int child : adj[f])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[f] + 1;
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
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int l;
    cin >> l;
    bfs(l);

    for (int i : lv)
        cout << i << " ";
    return 0;
}