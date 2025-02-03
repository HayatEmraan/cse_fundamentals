#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        list<int> a;

        for (int j = 0; j < it; j++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        a.sort();
        a.unique();

        for (int number : a)
        {
            cout << number << " ";
        }

        cout << endl;
    }

    return 0;
}