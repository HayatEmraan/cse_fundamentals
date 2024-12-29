#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", a);
    printf("%d", &b);
    return 0;
}

/*
 * int - 2/4 bytes = %d
 * float = 4 bytes = %f
 * double = 8 bytes = %lf
 * char = 1 bytes = %c
 * strings = %s
 */