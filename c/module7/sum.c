#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int x, y, sum = 0;
        scanf("%d %d", &x, &y);

        int cs = (x > y) ? y : x;
        int zs = (x < y) ? y : x;

        for (int i = (cs + 1); i < zs; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}