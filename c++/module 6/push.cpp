#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    s.push_back('d');

    cout << s << endl;

    s.pop_back();

    cout << s;

    return 0;
}