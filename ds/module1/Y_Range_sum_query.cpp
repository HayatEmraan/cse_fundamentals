#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> a(n + 5);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int in;
        cin >> in;
        a[i] = a[i - 1] + in;
    }

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            cout << a[r] << endl;
        }
        else
        {
            cout << a[r] - a[l - 1] << endl;
        }
    }

    return 0;
}