#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        long long int t;
        cin >> t;

        a[i] = a[i - 1] + t;
    }

    for (int i = n; i >= 1; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}