#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        pq.push(t);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int ix;
        cin >> ix;

        if (ix == 0)
        {
            int vl;
            cin >> vl;
            pq.push(vl);
            cout << pq.top() << endl;
        }
        else if (ix == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
        }
    }

    return 0;
}
