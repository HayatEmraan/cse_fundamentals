#include <bits/stdc++.h>
using namespace std;

string rep_str(string str, string x)
{
    int idx = str.find(x), sx = x.size();

    if (idx >= 0)
    {
        str.replace(idx, sx, "#");
        return rep_str(str, x);
    }

    return str;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        string str = rep_str(s, x);

        cout << str << endl;
    }

    return 0;
}