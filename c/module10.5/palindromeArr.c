#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int a[n], d[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        d[i] = a[j];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != d[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}