#include <stdio.h>

void recur(int x, int y)
{

    if (x > y)
    {
        return;
    }

    printf("I love Recursion\n");
    recur(x + 1, y);
}

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    recur(i, n);
    return 0;
}