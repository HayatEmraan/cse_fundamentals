#include <stdio.h>

int main()
{

    int n, count = 0;

    scanf("%d", &n);

    int a[100000 + 5] = {0};

    for (int i = 1; i <= n; i++)
    {
        int nm;
        scanf("%d", &nm);
        a[nm] += 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}