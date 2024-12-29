#include <stdio.h>
#include <string.h>

int rng = 50;

int main()
{

    int tst;

    scanf("%d", &tst);
    char s[rng], t[rng];

    for (int j = 0; j < tst; j++)
    {

        scanf("%s %s", s, t);

        int dis = strlen(s) - strlen(t);

        int lth = 0;

        if (dis >= 0)
        {
            lth = strlen(s);
        }
        else
        {
            lth = strlen(t);
        }

        for (int i = 0; i < lth; i++)
        {
            printf("%c%c", s[i], t[i]);
        }

        printf("\n");
    }

    return 0;
}