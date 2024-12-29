#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int a1 = a + b - c;
    int a2 = a - b + c;
    int a3 = a - b * c;
    int a4 = a + b * c;
    int a5 = a * b + c;
    int a6 = a * b - c;

    if (a1 == d || a2 == d || a3 == d || a4 == d || a5 == d || a6 == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}