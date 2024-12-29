#include <stdio.h>

int main()
{
    int n, m, x;

    scanf("%d %d %d", &n, &m, &x);

    int mt[n][m];

    int elm[1000 + 5] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mt[i][j]);
            elm[mt[i][j]] += 1;
        }
    }

    for (int i = 0; i < x; i++)
    {

        int xy;

        scanf("%d", &xy);

        printf("%d\n", elm[xy]);
    }

    return 0;
}