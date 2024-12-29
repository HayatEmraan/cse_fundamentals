#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int mt[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mt[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnd = mt[i][j];

            if ((i == j && cnd == 1))
            {
                continue;
            }
            else
            {
                if (cnd != 0)
                {
                    printf("NO");
                    return 0;
                }
            }
        }
    }

    printf("YES");

    return 0;
}