#include <stdio.h>

int main()
{

    int a;
    scanf("%d", &a);
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d", -1);
    }

    return 0;
}