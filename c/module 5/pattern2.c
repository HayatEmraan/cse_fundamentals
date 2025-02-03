#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = a; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}