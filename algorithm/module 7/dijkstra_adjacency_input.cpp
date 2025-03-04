#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> d[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        d[a].push_back({b, c});
        d[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "s childrens :: ";
        for (pair<int, int> v : d[i])
        {
            int f1 = v.first;
            int s2 = v.second;

            cout << f1 << " weight -> " << s2 << ",";
        }
        cout << endl;
    }

    return 0;
}
