#include <stdio.h>

int main()
{

    int n, m, x;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                printf("will not take number");
                return 0;
            };
        }
    }

    printf("will take number");

    return 0;
}