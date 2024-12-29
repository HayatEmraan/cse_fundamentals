#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 100 && a <= 249)
    {
        printf("Three Fuchka");
    }
    else if (a <= 499 && a >= 250)
    {
        printf("Three Small Burger");
    }
    else if (a >= 1000)
    {
        printf("Three Kacchi");
    }
    else if (a >= 500 && a <= 999)
    {
        printf("One Large Pizza");
    }
    else
    {
        printf("Nothing");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}