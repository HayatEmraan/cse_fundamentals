#include <stdio.h>

int main()
{
    int numOfBrothers;
    scanf("%d", &numOfBrothers);

    int amount[numOfBrothers], bigNum = 0;

    for (int i = 0; i < numOfBrothers; i++)
    {
        scanf("%d", &amount[i]);
    }

    for (int i = 0; i < numOfBrothers; i++)
    {
        if (bigNum < amount[i])
        {
            bigNum = amount[i];
        }
    }
    for (int i = 0; i < numOfBrothers; i++)
    {
        if (bigNum == amount[i])
        {
            amount[i] = 0;
        }
        else
        {
            amount[i] = bigNum - amount[i];
        }
    }

    for (int i = 0; i < numOfBrothers; i++)
    {
        printf("%d ", amount[i]);
    }

    return 0;
}