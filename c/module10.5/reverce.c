#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int n[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0, j = a - 1; i <= j; i++, j--)
    {
        int tmp = n[i];
        n[i] = n[j];
        n[j] = tmp;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}