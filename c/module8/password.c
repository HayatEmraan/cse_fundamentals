#include <stdio.h>

int main()
{
    int pass = 1999;
    int a;

    while (scanf("%d", &a) != EOF)
    {
        if (pass == a)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}