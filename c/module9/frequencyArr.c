#include <stdio.h>

int count[1000000];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i - 1] == j)
            {
                count[i - 1] = count[i - 1] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", count[i]);
    }

    return 0;
}