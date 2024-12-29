#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    int a[n], fz[100005] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            fz[a[i]] += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (fz[i] > 0)
        {
            printf("%d\n", fz[i]);
        }
    }

    return 0;
}