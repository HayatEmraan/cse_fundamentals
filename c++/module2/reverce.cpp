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

    for (int i = 0, j = a - 1; i < a; i++, j--)
    {
        if (i > j)
        {
            break;
        }
        swap(n[i], n[j]);
    }

    for (int i = 0; i < a; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}