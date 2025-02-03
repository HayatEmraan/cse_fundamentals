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
        stack<char> zero;
        stack<char> one;

        for (char l : zo)
        {
            if (l == '0')
            {
                zero.push(l);
                if (!one.empty())
                {
                    if (one.top() == l)
                    {
                        one.pop();
                        zero.pop();
                    }
                }
            }
            else
            {
                one.push(l);
                if (!zero.empty())
                {
                    if (zero.top() == l)
                    {
                        one.pop();
                        zero.pop();
                    }
                }
            }
        }

        if (one.size() != zero.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}