#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];

    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }

    sort(n, n + a);

    for (int j = 0; j < a; j++)
    {
        cout << n[j] << " ";
    }

    return 0;
}