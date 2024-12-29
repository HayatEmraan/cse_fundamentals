#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}