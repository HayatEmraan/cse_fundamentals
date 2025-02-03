#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;

    cin >> a;

    if (a >= 65 && a <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (a >= 97 && a <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }
    return 0;
}