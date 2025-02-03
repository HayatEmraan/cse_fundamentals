#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    long long int sum = (1LL * (a + 1) * a) / 2;

    printf("%lld", sum);

    return 0;
}