#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> qs;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        string s;
        cin >> tmp;

        if (tmp == 0)
        {
            cin >> s;
            qs.push(s);
        }
        else if (qs.empty())
        {
            cout << "Invalid" << endl;
        }
        else
        {
            cout << qs.front() << endl;
            qs.pop();
        }
    }

    return 0;
}