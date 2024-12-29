#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int arr[3];

    if (a >= b && a >= c)
    {
        if (b <= c)
        {
            arr[0] = b;
            arr[1] = c;
            arr[2] = a;
        }
        else
        {
            arr[0] = c;
            arr[1] = b;
            arr[2] = a;
        }
    }
    else if (b >= a && b >= c)
    {
        if (a < c)
        {
            arr[0] = a;
            arr[1] = c;
            arr[2] = b;
        }
        else
        {
            arr[0] = c;
            arr[1] = a;
            arr[2] = b;
        }
    }
    else
    {
        if (a < b)
        {
            arr[0] = a;
            arr[1] = b;
            arr[2] = c;
        }
        else
        {
            arr[0] = b;
            arr[1] = a;
            arr[2] = c;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}