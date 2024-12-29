#include <stdio.h>
#include <string.h>

int main()
{

    char x[25], y[25];

    scanf("%s %s", x, y);

    int xStr = strlen(x);
    int yStr = strlen(y);

    for (int i = 0; i < xStr; i++)
    {
        int tmp = x[i] - y[i];
        if (tmp == 0)
        {
            continue;
        }
        else if (tmp < 0)
        {
            printf("%s", x);
            return 0;
        }
        else
        {
            printf("%s", y);
            return 0;
        }
    }

    if (xStr <= yStr)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", yStr);
    }

    return 0;
}