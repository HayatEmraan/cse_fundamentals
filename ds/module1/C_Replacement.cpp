#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        if (v > 0)
        {
            a[i] = 1;
        }
        else if (v < 0)
        {
            a[i] = 2;
        }
        else
        {
            a[i] = 0;
        }
    }

    for (int s : a)
    {
        cout << s << " ";
    }

    return 0;
}