#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char q, e;
    cin >> a >> q >> b >> e >> c;

    if (q == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (q == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }
    return 0;
}