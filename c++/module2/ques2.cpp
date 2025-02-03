#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];

    for (int j = n; j < m; j++)
    {
        cin >> b[j];
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // cout << endl;

    delete[] a;

    for (int j = 0; j < m; j++)
    {
        cout << b[j] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}