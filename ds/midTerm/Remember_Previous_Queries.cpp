#include <bits/stdc++.h>
using namespace std;

void print_left(list<int> l)
{
    cout << "L ->" << " ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

void print_right(list<int> l)
{
    l.reverse();
    cout << "R ->" << " ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else
        {
            if (l.size() > v)
            {

                auto it = l.begin();
                advance(it, v);

                l.erase(it);
            }
        }

        print_left(l);
        print_right(l);
    }

    return 0;
}