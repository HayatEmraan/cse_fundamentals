#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> edge_l;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        edge_l.push_back({a, b});
    }

    for (auto it : edge_l)
        cout << it.first << " " << it.second << endl;

    return 0;
}