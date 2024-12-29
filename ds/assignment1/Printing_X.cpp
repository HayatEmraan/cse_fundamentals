#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int d = n / 2;

    for (int i = 0, t = n - 2; i < d; i++, t -= 2)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "\\";

        for (int j = t; j > 0; j--)
        {
            cout << " ";
        }

        cout << "/" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (d == i)
        {
            cout << "X";
        }
        else
        {
            cout << " ";
        }
    }

    cout << endl;

    for (int i = d - 1, t = 0; i >= 0; i--, t += 2)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "/";

        for (int y = 0; y <= t; y++)
        {
            cout << " ";
        }

        cout << "\\" << endl;
    }

    return 0;
}