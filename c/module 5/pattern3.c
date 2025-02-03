#include <stdio.h>

int main()
{
    int a;
    char temp = 65;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = temp; j < (temp + i); j++)
        {
            printf("%c ", temp);
        }
        temp++;
        printf("\n");
    }

    return 0;
}