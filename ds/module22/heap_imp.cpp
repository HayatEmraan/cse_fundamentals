#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    int in;
    cin >> in;
    v.push_back(in);

    int cur_idx = v.size() - 1;

    while (true)
    {
        int par_idx = (cur_idx - 1) / 2;

        if (v[cur_idx] > v[par_idx])
            swap(v[cur_idx], v[par_idx]);
        else
            break;

        cur_idx = par_idx;
    }

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}