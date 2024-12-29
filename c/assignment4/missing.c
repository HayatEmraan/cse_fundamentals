#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long cnd = (long long)a * b * c;

        if (m == 0)
        {
            printf("%d\n", 0);
        }
        else if (cnd == m)
        {
            printf("%d\n", 1);
        }
        else
        {
            if (m % cnd == 0)
            {
                long long j = m / cnd;
                printf("%lld\n", j);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
    }

    return 0;
}
