#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *xr = &x, *yr = &y;

    int tmp = *xr;

    x = *yr;
    y = tmp;

    printf("%d %d", x, y);

    return 0;
}