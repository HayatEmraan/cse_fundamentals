#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 2; i <= x; i++)
    {
        if (i == 2)
        {
            printf("%d ", i);
        }
        else if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}