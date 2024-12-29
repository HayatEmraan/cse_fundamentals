#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *xr = &x, *yr = &y;

    printf("%d", *xr + *yr);
    return 0;
}