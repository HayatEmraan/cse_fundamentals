#include <stdio.h>

int main()
{
    int n, itt = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = n; i > 1; i--)
    {
        for (int j = 1; j <= itt; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        itt += 1;
        printf("\n");
    }

    return 0;
}
