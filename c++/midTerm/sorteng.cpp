#include <bits/stdc++.h>
using namespace std;

string removeSpace(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    return str;
}

int main()
{
    string ab;
    while (getline(cin, ab))
    {
        sort(ab.begin(), ab.end());
        cout << removeSpace(ab) << endl;
    }

    return 0;
}