#include <stdio.h>

int main()
{
    char a[15], b[15];

    scanf("%s %s", a, b);

    int aCount = 0;
    for (int i = 0; i < 15; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        aCount += 1;
    }

    int bCount = 0;
    for (int i = 0; i < 15; i++)
    {
        if (b[i] == '\0')
        {
            break;
        }
        bCount += 1;
    }

    printf("%d %d\n", aCount, bCount);

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < aCount; j++)
        {
            printf("%c", a[j]);
        }
        for (int y = 0; y < bCount; y++)
        {
            printf("%c", b[y]);
        }

        printf("\n");
    }

    for (int i = 0; i < 1; i++)
    {
        char temp = a[i];

        a[i] = b[i];
        b[i] = temp;

        for (int j = 0; j < aCount; j++)
        {
            printf("%c", a[j]);
        }
        printf(" ");
        for (int y = 0; y < bCount; y++)
        {
            printf("%c", b[y]);
        }

        printf("\n");
    }

    return 0;
}