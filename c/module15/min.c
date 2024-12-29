#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *ap = &a, *bp = &b, *cp = &c;

    int min = 0, max = 0;

    if (*ap >= *bp && *ap >= *cp)
    {
        if (*bp >= *cp)
        {
            min = *cp;
        }
        else
        {
            min = *bp;
        }
        max = *ap;
    }
    else if (*bp >= *ap && *bp >= *cp)
    {

        if (*ap >= *cp)
        {
            min = *cp;
        }
        else
        {
            min = *ap;
        }

        max = *bp;
    }
    else
    {
        if (*ap >= *bp)
        {
            min = *bp;
        }
        else
        {
            min = *ap;
        }
        max = *cp;
    }

    printf("%d %d", min, max);

    return 0;
}