#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000010];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int r, c;
        cin >> r >> c;

        v[r].push_back(c); // directed graph
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int src, des;
        cin >> src >> des;

        auto it = find(v[src].begin(), v[src].end(), des);

        if (src == des)
            cout << "YES" << endl;
        else if (it != v[src].end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}