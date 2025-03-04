#include <stdio.h>
#include <string.h>

int rng = 100 + 5;

int main()
{

    char a[rng], b[rng], c[rng];

    scanf("%s %s %s", a, b, c);

    int count = 0;

    int lth = strlen(a);

    for (int i = 0; i < lth; i++)
    {
        if (a[i] != b[i] && a[i] != c[i])
        {
            count += 2;
        }
        else if (a[i] != b[i] || a[i] != c[i])
        {
            count += 1;
        }
    }

    printf("%d", count);

    return 0;
}