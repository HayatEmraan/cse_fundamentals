#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int cd[n + 4];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cd[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (cd[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (cd[i] >= 1 && cd[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (cd[i] >= 4 && cd[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}