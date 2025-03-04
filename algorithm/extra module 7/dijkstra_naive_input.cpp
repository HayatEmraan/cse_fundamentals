#include <bits/stdc++.h>
using namespace std;

int dis[50];
vector<pair<int, int>> d[50];

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
        cout << i << " children :: ";
        for (pair<int, int> p : d[i])
            cout << p.first << " distance :: " << p.second << ", ";
        cout << endl;
    }

    return 0;
}