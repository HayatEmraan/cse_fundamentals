#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {

                d1 += a[i][j];
            }

            if ((i + j) == n - 1)
            {
                d2 += a[i][j];
            }
        }
    }

    unsigned int dis = d1 > d2 ? d1 - d2 : d2 - d1;

    printf("%u", dis);

    return 0;
}