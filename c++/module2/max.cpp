#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int min = INT_MIN;

    for (int i = 0; i < a; i++)
    {
        int tmp;
        cin >> tmp;
        min = max(min, tmp);
    }

    cout << min;

    return 0;
}