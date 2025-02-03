#include <stdio.h>

int lth = 1005;

int main()
{
    char s[lth], rv[lth];
    scanf("%s", s);

    int sCount = 0;

    for (int i = 0; i < lth; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        sCount += 1;
    }

    for (int i = 0, j = sCount - 1; i < sCount; i++, j--)
    {
        rv[i] = s[j];
    }

    for (int i = 0; i < sCount; i++)
    {
        if (s[i] != rv[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}