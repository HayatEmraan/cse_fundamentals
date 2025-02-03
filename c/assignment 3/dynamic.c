#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int *ptr = calloc(1, sizeof(int));

    for (int i = 1; i <= n; i++)
    {
        ptr = realloc(ptr, i * sizeof(int));
        scanf("%d", &ptr[i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}