#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    a.erase(unique(a.begin(), a.end()), a.end());

    if (a.size() == n)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}