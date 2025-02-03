#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nArr[n];

    int count0 = 0, count1 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nArr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nArr[i] == 1)
        {
            count1 += 1;
        }
        else
        {
            count0 += 1;
        }
    }

    printf("%d %d", count0, count1);

    return 0;
}