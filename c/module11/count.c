#include <stdio.h>
#include <string.h>

int rng = 1000000;
int main()
{

    char s[rng];

    scanf("%s", s);

    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        sum += (int)s[i] - '0';
    }

    printf("%d", sum);

    return 0;
}