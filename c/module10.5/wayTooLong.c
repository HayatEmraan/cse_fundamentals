#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    char s[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s[i]);
    }

    for (int i = 0; i < t; i++)
    {

        int sCount = 0;
        for (int j = 0; j < 105; j++)
        {
            if (s[i] == '\0')
            {
                break;
            }

            sCount += 1;
        }

        printf("%d", sCount);

        if (sCount <= 10)
        {
            printf("%s", s[i]);
        }
        else
        {

            printf("%c %d %c", s[0], sCount, s[sCount - 1]);
        }
    }

    return 0;
}