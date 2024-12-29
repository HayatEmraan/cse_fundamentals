#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        if (n < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool found = false;

        for (int i = 0; i < n - 2; i++)
        {

            if (i > 0 && a[i] == a[i - 1])
            {
                continue;
            }

            int target = s - a[i];
            int low = i + 1, high = n - 1;

            while (low < high)
            {
                int sum = a[low] + a[high];

                if (sum == target)
                {
                    found = true;
                    break;
                }
                else if (sum < target)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }

            if (found)
            {
                break;
            }
        }

        if (found)
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
