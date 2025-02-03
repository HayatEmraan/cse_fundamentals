#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    while (true)
    {
        int tmp;
        cin >> tmp;
        if (tmp == -1)
        {
            break;
        }

        l.push_back(tmp);
    }

    l.sort();

    l.unique();

    for (auto i : l)
    {
        cout << i << " ";
    }

    return 0;
}