#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    int smart[n + 4];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &smart[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (smart[i] >= x && smart[i] <= y)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}