#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0, x = (m - 1); i < n; i++, x--)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            scanf("%d", &val);
            if (i == j && val == 1)
            {
                arr[i][j] = val;
            }
            else if (val == 1 && x == j)
            {
                arr[i][j] = val;
            }
            else if (val == 0 && j != x && j != i)
            {
                arr[i][j] = val;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");

    return 0;
}