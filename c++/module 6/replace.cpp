#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    s.replace(0, 2, "something");

    s.erase(0, 4);

    cout << s;
    return 0;
}