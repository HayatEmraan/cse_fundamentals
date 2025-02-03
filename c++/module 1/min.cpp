#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 2;

    cout << min(a, b);
    cout << max(a, b);

    swap(a, b);

    cout
        << a << b;
    return 0;
}