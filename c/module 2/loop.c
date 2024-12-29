#include <stdio.h>

int main()
{
    int i;
    int count;
    char[] c;
    scanf("%d, %c", &count, &c);
    for (i = 0; i < count; i++)
    {
        printf("%s\n", c);
    }

    return 0;
}