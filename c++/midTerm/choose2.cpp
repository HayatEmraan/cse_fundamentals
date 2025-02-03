#include <bits/stdc++.h>

using namespace std;

bool choose_three(int arr[], int n, int sum)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int target = arr[i] + arr[j] + arr[k];

            if (target == sum)
            {
                return true;
            }
            else if (target < sum)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum;
        cin >> n >> sum;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (choose_three(arr, n, sum))
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