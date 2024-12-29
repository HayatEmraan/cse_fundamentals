#include <bits/stdc++.h>
using namespace std;

void print_int(int *b)
{
    cout << b << endl;
    *b = 3;
}

int main()
{
    int a = 5;
    int *p = &a;

    cout << &a << endl;

    cout << p << endl;

    print_int(p);

    cout << *p;
    return 0;
}