#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[t] = t;
    }

    for (int i = 0; i < q; i++)
    {
        int v;
        cin >> v;
        if (a[v] == v)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}