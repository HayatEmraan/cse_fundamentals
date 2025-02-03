#include <stdio.h>

int main()
{
    int a, b;
    char x;
    scanf("%d", &a);
    scanf(" %c", &x);
    scanf("%d", &b);
    if (x == '<')
    {
        if (a < b)
        {

            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (x == '>')
    {
        if (a > b)
        {

            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (x == '=')
    {
        if (a == b)
        {

            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }

    return 0;
}