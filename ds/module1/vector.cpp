#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 2;
    vector<int> z = {2, 5, 3, 4, 6};
    vector<int> v;
    // v = z;
    v.assign(z.begin(), z.end());
    // cout << v.size();
    // cout << v.max_size();
    // cout << v.capacity();
    v.clear();
    // cout << v.capacity();
    // v.resize(8, 4);
    // cout << v[7];

    v.push_back(2);

    cout << v[1];
    return 0;
}