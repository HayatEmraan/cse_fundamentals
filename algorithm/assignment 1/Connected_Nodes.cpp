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

        v[r].push_back(c);
        v[c].push_back(r); // undirect graph
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        if (v[x].size())
        {
            sort(v[x].begin(), v[x].end(), greater<int>());

            for (int c : v[x])
                cout << c << " ";
        }
        else
            cout << -1 << " ";

        cout << endl;
    }

    return 0;
}