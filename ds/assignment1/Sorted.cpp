#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        vector<int> a(t);

        for (int j = 0; j < t; j++)
        {

            cin >> a[j];
        }

        bool flag = true;

        for (int z = 1; z < t; z++)
        {
            if (a[z - 1] <= a[z])
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}