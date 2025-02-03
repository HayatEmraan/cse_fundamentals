#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        int n;
        scanf("%d", &n);

        long long fac = 1;

        for (int j = 1; j <= n; j++)
        {
            fac *= j;
        }

        printf("%lld\n", fac);
    }

    return 0;
}