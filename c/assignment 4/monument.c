#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            printf("%d ", j + 1);
        }

        for (int x = n - 1; x >= 1; x--)
        {
            printf("%d ", x);
        }

        printf("\n");
    }

    return 0;
}