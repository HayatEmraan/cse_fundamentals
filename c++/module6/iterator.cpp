#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    cout << *s.begin() << endl;

    cout << *(s.end() - 1);
    return 0;
}