#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string zo;
        cin >> zo;
        stack<char> zno;

        for (char l : zo)
        {
            if (zno.empty())
                zno.push(l);
            else
            {
                if (zno.top() == '0' && l == '1')
                    zno.pop();
                else
                    zno.push(l);
            }
        }

        if (zno.empty())
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